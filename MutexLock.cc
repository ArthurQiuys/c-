 ///---------------------------------------///
 /// @file is the MutexLock.cc
 /// @arthor is the arthur(qiuyuanshun@yeah.net)
 /// @date:2016-02-29 19:34:56
 ///------------------------------------------///
#include <iostream>
#include <pthread.h>
using namespace std;
class MutexLock 
{ 
    public: 
        MutexLock ()
        {
            pthread_mutex_init(&_mutex,NULL);
        }
        ~MutexLock ()
        {
            pthread_mutex_destroy(&_mutex);
        }

        /*pthread_mutex_t * getLock()
        {
            return &mutex_;
        }*/
        void Lock()
        {
            pthread_mutex_lock(&_mutex);
        }

        void unlock()
        {
            pthread_mutex_unlock(&_mutex);
        }
    private:
        pthread_mutex_t _mutex;
        MutexLock(const MutexLock &);
        MutexLock & operator = (const MutexLock &);
}; 
class Condittion 
{ 
    public: 
        Condittion (MutexLock & mutex)
            :_mutex(mutex)
        {
            pthread_cond_init(&cond,NULL);
        }
        ~Condittion ()
        {
            pthread_cond_destroy(&cond);
        }
        void Condittion_wait()
        {
            pthread_cond_wait(&cond,mutex);
        }
        void Condittion_signal()
        {
            pthread_cond_signal(&cond);
        }
        void Condittion_broadcast()
        {
            pthread_cond_broadcast(&cond);
        }
    private:
        pthread_cond_t cond;
        MutexLock & _mutex; 
}; 
