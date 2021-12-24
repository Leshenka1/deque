#pragma once

#include <string>
#include <cstring>

#include <iostream>


using namespace std;

template<typename T>
class Deque {
private:

    struct Node {
        T value_;
        Node* next_;
        Node* prev_;

    };

    Node* head_;
    Node* tail_;
    size_t size_;
public:



    Deque() : head_(nullptr), tail_(nullptr), size_(0) {}

    //copy
    Deque(const Deque<T>& a) {
        Clone(a);

    }


    ~Deque() {
        for (size_t i = 0; i < this->size_; i++) {
            this->delete_last();
        }
    }

    void push_front(T value) {
        Node* tmp = new (Node);
        tmp->next_ = head_;
        tmp->prev_ = nullptr;
        tmp->value_ = value;
        if (head_ == nullptr) {
            head_ = tmp;
            tail_ = head_;
            size_++;
            return;
        }
        head_->prev_ = tmp;
        head_ = tmp;
        size_++;
    }

    void push_back(T value) {
        if (head_ == nullptr) {
            push_front(value);
            return;
        }
        Node* tmp = new (Node);
        tmp->next_ = nullptr;
        tmp->prev_ = tail_;
        tmp->value_ = value;
        tail_->next_ = tmp;
        tail_ = tmp;
        size_++;
    }

   void Clone(const Deque& a) {
        Node* cur = a.head_;
        for (size_t i = 0; i < a.size_; i++)
        {
            this->push_back(cur->value_);
            cur = cur->next_;
        }
   }

    Deque<T>& operator =(const Deque<T>& a) {
        //Deque<T> b;
        this->Clone(a);
        return  *this;
    }

    T front() {
        return head_->value_;
    }

    T back() {
        return tail_->value_;
    }

    void delete_first() {
        if (head_) {
            Node* tmp = head_;
            if (head_ != tail_) {
                head_ = tmp->next_;
                tmp->next_->prev_ = nullptr;
                size_--;
            }
            else {
                head_ = nullptr;
                tail_ = nullptr;
                size_--;
            }
            delete tmp;
        }
    }

    void delete_last() {
        if (tail_) {
            if (tail_ == head_) {
                delete_first();
            }
            else {
                Node* tmp = tail_;
                tmp->prev_->next_ = nullptr;
                tail_ = tmp->prev_;
                size_--;
                delete tmp;
            }
        }
    }

    size_t get_size() {
        return this->size_;
    }

    void print_straigth() {
        std::cout << "Straight Print" << std::endl;
        Node* cur = this->head_;
        for (size_t i = 0; i < this->size_; i++) {
            std::cout << cur->value_ << " ";
            cur = cur->next_;
        }
        std::cout << std::endl;
    }
    void print_reverse() {
        std::cout << "Reverse Print" << std::endl;
        Node* cur = this->tail_;
        for (size_t i = this->size_; i > 0; i--) {
            std::cout << cur->value_ << " ";
            cur = cur->prev_;
        }
        std::cout << std::endl;
    }
#if 0
    template<>
    Deque<const char*>::Node::Node(const char* Avalue) : next_(NULL), prev_(NULL) {
        value_ = new char[strlen(Avalue) + 1];
        strcpy((char*)value_, Avalue);

    }
#endif
};
