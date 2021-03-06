// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopoDS_Wire_HeaderFile
#define _TopoDS_Wire_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TopoDS_Shape.hxx>


//! Describes a wire which
//! - references an underlying wire with the potential to
//! be given a location and an orientation
//! - has a location for the underlying wire, giving its
//! placement in the local coordinate system
//! - has an orientation for the underlying wire, in terms
//! of its geometry (as opposed to orientation in relation to other shapes).
class TopoDS_Wire  : public TopoDS_Shape
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Undefined Wire.
    TopoDS_Wire();




protected:





private:





};


#include <TopoDS_Wire.lxx>





#endif // _TopoDS_Wire_HeaderFile
