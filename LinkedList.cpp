//
// Created by Quinn Clark on 9/19/2017.
//sites used for general things were SO, and cplusplus.com

// LinkedList.cpp

// tom bailey   0745  5 oct 2010
// Definition of methods for the List class.

#include "LinkedList.h"

#include <utility>


List::List()
        : first_(NULL)
{
}



List::List(const List & other)
        : first_(clone(other.first_))
{
}


List::~List()
{
    while (!empty())
    {
        removeFirst();
    }
}


const List & List::operator=(const List & other)
{
    // check for list = list
    if (&other != this)
    {
        // clear the current contents of this List
        this -> ~List();
        // and get a copy of other
        first_ = clone(other.first_);
    }

    return *this;
}


bool List::empty() const
{
    return first_ == NULL;
}


void List::insertAsFirst(double x)
{
    first_ = new Node(x, first_);
}

void List::insertAsLast(double x)
{
    last_ = new Node(x, last_);
}


double List::removeFirst()
{
    double item = first_->entry_;
    Node * tempPtr = first_;
    first_ = first_->next_;
    delete tempPtr;
    return item;
}


void List::print(ostream & outfile) const
{
    outfile << "[ ";
    if (!empty())
    {
        // The first entry is printed separately because no comma
        // is needed.
        outfile << first_->entry_;
        Node * ptr = first_->next_;
        while (ptr != NULL)
        {
            outfile << ", " << ptr->entry_;
            ptr = ptr->next_;
        }
    }
    outfile << " ]";
}

double List::sum()
{
    double sum;
    Node *ptr = first_->next_;
    while(ptr != NULL)
    {
        sum += sum + ptr->entry_;
    }
}



// Iterative version of clone.
// This version walks down the linked structure making a
//   new Node for each double in the structure.
Node * List::clone(Node * ptr)
{
    if (ptr == NULL)
    {
        return NULL;
    }
    Node * first = new Node(ptr->entry_);
    Node * last = first;
    ptr = ptr->next_;
    while (ptr != NULL)
    {
        last->next_ = new Node(ptr->entry_);
        last = last->next_;
        ptr = ptr->next_;
    }
    return first;
}

double List::size()
{
 Node * s = first_;
    while(s != NULL)
    {
        ++num;
        s = s ->next_;
    }
}



//// Recursive version of clone.
//// This version handles two cases, a linked structure with
////   no Nodes, and a linked structure with one or more
////   Nodes.
//Node * List::clone( Node * ptr )
//{
//   if( ptr == NULL )
//   {
//      return NULL;
//   }
//   return new Node( ptr->entry_, clone( ptr->next_ ) );
//}


ostream & operator<<(ostream & outfile, const List & list)
{
    list.print(outfile);
    return outfile;
}

