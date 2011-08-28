// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DBC_VArrayOfInteger_HeaderFile
#define _DBC_VArrayOfInteger_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _DBC_BaseArray_HeaderFile
#include <DBC_BaseArray.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_DBC_VArrayNodeOfVArrayOfInteger_HeaderFile
#include <Handle_DBC_VArrayNodeOfVArrayOfInteger.hxx>
#endif
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class Standard_NegativeValue;
class Standard_OutOfRange;
class Standard_DimensionMismatch;
class Standard_NullObject;
class DBC_VArrayNodeOfVArrayOfInteger;
class DBC_VArrayTNodeOfVArrayOfInteger;



Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(DBC_VArrayOfInteger);


class DBC_VArrayOfInteger  : public DBC_BaseArray {

public:
  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   DBC_VArrayOfInteger();
  
  Standard_EXPORT   DBC_VArrayOfInteger(const Standard_Integer Size);
  
  Standard_EXPORT   DBC_VArrayOfInteger(const DBC_VArrayOfInteger& Varray);
  
  Standard_EXPORT     void Resize(const Standard_Integer Size) ;
  
  Standard_EXPORT     void Assign(const DBC_VArrayOfInteger& Other) ;
    void operator =(const DBC_VArrayOfInteger& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Standard_Integer& Value) ;
  
  Standard_EXPORT     Standard_Integer& Value(const Standard_Integer Index) const;
    Standard_Integer& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void Destroy() ;
~DBC_VArrayOfInteger()
{
  Destroy();
}



protected:




private: 

#ifdef CSFDB
// DBC_VArray : field
//
#endif



};





// other Inline functions and methods (like "C++: function call" methods)


#endif