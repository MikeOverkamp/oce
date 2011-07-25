// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntPatch_SequenceNodeOfSequenceOfPoint_HeaderFile
#define _IntPatch_SequenceNodeOfSequenceOfPoint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IntPatch_SequenceNodeOfSequenceOfPoint_HeaderFile
#include <Handle_IntPatch_SequenceNodeOfSequenceOfPoint.hxx>
#endif

#ifndef _IntPatch_Point_HeaderFile
#include <IntPatch_Point.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class IntPatch_Point;
class IntPatch_SequenceOfPoint;



class IntPatch_SequenceNodeOfSequenceOfPoint : public TCollection_SeqNode {

public:

  
      IntPatch_SequenceNodeOfSequenceOfPoint(const IntPatch_Point& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        IntPatch_Point& Value() const;




  DEFINE_STANDARD_RTTI(IntPatch_SequenceNodeOfSequenceOfPoint)

protected:




private: 


IntPatch_Point myValue;


};

#define SeqItem IntPatch_Point
#define SeqItem_hxx <IntPatch_Point.hxx>
#define TCollection_SequenceNode IntPatch_SequenceNodeOfSequenceOfPoint
#define TCollection_SequenceNode_hxx <IntPatch_SequenceNodeOfSequenceOfPoint.hxx>
#define Handle_TCollection_SequenceNode Handle_IntPatch_SequenceNodeOfSequenceOfPoint
#define TCollection_SequenceNode_Type_() IntPatch_SequenceNodeOfSequenceOfPoint_Type_()
#define TCollection_Sequence IntPatch_SequenceOfPoint
#define TCollection_Sequence_hxx <IntPatch_SequenceOfPoint.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif