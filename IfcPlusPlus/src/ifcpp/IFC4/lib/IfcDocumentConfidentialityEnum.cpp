/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcDocumentConfidentialityEnum.h"

// TYPE IfcDocumentConfidentialityEnum = ENUMERATION OF	(PUBLIC	,RESTRICTED	,CONFIDENTIAL	,PERSONAL	,USERDEFINED	,NOTDEFINED);
IfcDocumentConfidentialityEnum::IfcDocumentConfidentialityEnum() {}
IfcDocumentConfidentialityEnum::~IfcDocumentConfidentialityEnum() {}
shared_ptr<IfcPPObject> IfcDocumentConfidentialityEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcDocumentConfidentialityEnum> copy_self( new IfcDocumentConfidentialityEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcDocumentConfidentialityEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCDOCUMENTCONFIDENTIALITYENUM("; }
	if( m_enum == ENUM_PUBLIC )
	{
		stream << ".PUBLIC.";
	}
	else if( m_enum == ENUM_RESTRICTED )
	{
		stream << ".RESTRICTED.";
	}
	else if( m_enum == ENUM_CONFIDENTIAL )
	{
		stream << ".CONFIDENTIAL.";
	}
	else if( m_enum == ENUM_PERSONAL )
	{
		stream << ".PERSONAL.";
	}
	else if( m_enum == ENUM_USERDEFINED )
	{
		stream << ".USERDEFINED.";
	}
	else if( m_enum == ENUM_NOTDEFINED )
	{
		stream << ".NOTDEFINED.";
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcDocumentConfidentialityEnum> IfcDocumentConfidentialityEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcDocumentConfidentialityEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcDocumentConfidentialityEnum>(); }
	shared_ptr<IfcDocumentConfidentialityEnum> type_object( new IfcDocumentConfidentialityEnum() );
	if( boost::iequals( arg, L".PUBLIC." ) )
	{
		type_object->m_enum = IfcDocumentConfidentialityEnum::ENUM_PUBLIC;
	}
	else if( boost::iequals( arg, L".RESTRICTED." ) )
	{
		type_object->m_enum = IfcDocumentConfidentialityEnum::ENUM_RESTRICTED;
	}
	else if( boost::iequals( arg, L".CONFIDENTIAL." ) )
	{
		type_object->m_enum = IfcDocumentConfidentialityEnum::ENUM_CONFIDENTIAL;
	}
	else if( boost::iequals( arg, L".PERSONAL." ) )
	{
		type_object->m_enum = IfcDocumentConfidentialityEnum::ENUM_PERSONAL;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcDocumentConfidentialityEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcDocumentConfidentialityEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}