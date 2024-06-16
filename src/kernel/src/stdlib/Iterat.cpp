#ifndef ITERATOR_H
#define ITERATOR_H

template <typename T>
class Iterator {
public:
    explicit Iterator(T* ptr);

    T& operator*();
    T* operator->();

    Iterator& operator++();
    Iterator operator++(int);

    bool operator==(const Iterator& other) const;
    bool operator!=(const Iterator& other) const;

private:
    T* m_ptr;
};

template <typename T>
class ReverseIterator {
public:
    explicit ReverseIterator(T* ptr);

    T& operator*();
    T* operator->();

    ReverseIterator& operator++();
    ReverseIterator operator++(int);

    bool operator==(const ReverseIterator& other) const;
    bool operator!=(const ReverseIterator& other) const;

private:
    T* m_ptr;
};

template <typename T>
class ConstIterator {
public:
    explicit ConstIterator(const T* ptr);

    const T& operator*() const;
    const T* operator->() const;

    ConstIterator& operator++();
    ConstIterator operator++(int);

    bool operator==(const ConstIterator& other) const;
    bool operator!=(const ConstIterator& other) const;

private:
    const T* m_ptr;
};

template <typename T>
class ConstReverseIterator {
public:
    explicit ConstReverseIterator(const T* ptr);

    const T& operator*() const;
    const T* operator->() const;

    ConstReverseIterator& operator++();
    ConstReverseIterator operator++(int);

    bool operator==(const ConstReverseIterator& other) const;
    bool operator!=(const ConstReverseIterator& other) const;

private:
    const T* m_ptr;
};

#include "Iterator.tpp"

#endif // ITERATOR_H

