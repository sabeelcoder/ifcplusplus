/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcImpactProtectionDeviceTypeSelect.h"

// TYPE IfcVibrationDamperTypeEnum = ENUMERATION OF	(BENDING_YIELD	,SHEAR_YIELD	,AXIAL_YIELD	,FRICTION	,VISCOUS	,RUBBER	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcVibrationDamperTypeEnum : public IfcImpactProtectionDeviceTypeSelect
{
public:
	enum IfcVibrationDamperTypeEnumEnum
	{
		ENUM_BENDING_YIELD,
		ENUM_SHEAR_YIELD,
		ENUM_AXIAL_YIELD,
		ENUM_FRICTION,
		ENUM_VISCOUS,
		ENUM_RUBBER,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcVibrationDamperTypeEnum() = default;
	IfcVibrationDamperTypeEnum( IfcVibrationDamperTypeEnumEnum e ) { m_enum = e; }
	~IfcVibrationDamperTypeEnum() = default;
	virtual const char* className() const { return "IfcVibrationDamperTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcVibrationDamperTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcVibrationDamperTypeEnumEnum m_enum;
};
