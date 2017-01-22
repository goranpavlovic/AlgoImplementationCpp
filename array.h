#ifndef ARRAY_H
#define ARRAY_H


template <class T> class Array
{
private:
    T* array;
public:
    //Consructor
    Array(int numberOfElements);

    //Methods
    void insert (T elem);
    bool remove (T elem);
    bool isExist(T elem);
    T get(T index);

    //Destructor
    ~Array();
};


/**
 * Constructors
 */

template <class T> Array<T>::Array(int numberOfElements)
{
    this->array = new T[numberOfElements];
}

/**
  * Public methods
  */

template <class T> void Array<T>::insert(T elem)
{

}

template <class T> bool Array<T>::remove(T elem)
{

}

template <class T> bool Array<T>::isExist(T elem)
{

}

template <class T> T Array<T>::get(T index)
{

}

/**
 * Destructor
 */

template <class T> Array<T>::~Array()
{
    delete this->array;
}





#endif // ARRAY_H
