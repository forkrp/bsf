//********************************* bs::framework - Copyright 2018-2019 Marko Pintera ************************************//
//*********** Licensed under the MIT license. See LICENSE.md for full terms. This notice is not to be removed. ***********//
#pragma once

#include "Serialization/BsBuiltinComponentLookup.h"
#include "Reflection/BsRTTIType.h"
#include "../../../Foundation/bsfCore/Components/BsCCamera.h"
#include "BsScriptCCamera.generated.h"
#include "../../../Foundation/bsfCore/Components/BsCBoxCollider.h"
#include "BsScriptCBoxCollider.generated.h"
#include "../../../Foundation/bsfCore/Components/BsCAudioListener.h"
#include "BsScriptCAudioListener.generated.h"
#include "../../../Foundation/bsfCore/Components/BsCCharacterController.h"
#include "BsScriptCCharacterController.generated.h"
#include "../../../Foundation/bsfCore/Components/BsCAnimation.h"
#include "BsScriptCAnimation.generated.h"
#include "../../../Foundation/bsfCore/Components/BsCAudioSource.h"
#include "BsScriptCAudioSource.generated.h"
#include "../../../Foundation/bsfCore/Components/BsCBone.h"
#include "BsScriptCBone.generated.h"
#include "../../../Foundation/bsfCore/Components/BsCCollider.h"
#include "BsScriptCCollider.generated.h"
#include "../../../Foundation/bsfCore/Components/BsCCapsuleCollider.h"
#include "BsScriptCCapsuleCollider.generated.h"
#include "../../../Foundation/bsfCore/Components/BsCJoint.h"
#include "BsScriptCJoint.generated.h"
#include "../../../Foundation/bsfCore/Components/BsCD6Joint.h"
#include "BsScriptCD6Joint.generated.h"
#include "../../../Foundation/bsfCore/Components/BsCDecal.h"
#include "BsScriptCDecal.generated.h"
#include "../../../Foundation/bsfCore/Components/BsCDistanceJoint.h"
#include "BsScriptCDistanceJoint.generated.h"
#include "../../../Foundation/bsfCore/Components/BsCFixedJoint.h"
#include "BsScriptCFixedJoint.generated.h"
#include "../../../Foundation/bsfCore/Components/BsCHingeJoint.h"
#include "BsScriptCHingeJoint.generated.h"
#include "../../../Foundation/bsfCore/Components/BsCLight.h"
#include "BsScriptCLight.generated.h"
#include "../../../Foundation/bsfCore/Components/BsCLightProbeVolume.h"
#include "BsScriptCLightProbeVolume.generated.h"
#include "../../../Foundation/bsfCore/Components/BsCMeshCollider.h"
#include "BsScriptCMeshCollider.generated.h"
#include "../../../Foundation/bsfCore/Components/BsCSphericalJoint.h"
#include "BsScriptCSphericalJoint.generated.h"
#include "../../../Foundation/bsfCore/Components/BsCReflectionProbe.h"
#include "BsScriptCReflectionProbe.generated.h"
#include "../../../Foundation/bsfCore/Components/BsCParticleSystem.h"
#include "BsScriptCParticleSystem.generated.h"
#include "../../../Foundation/bsfCore/Components/BsCPlaneCollider.h"
#include "BsScriptCPlaneCollider.generated.h"
#include "../../../Foundation/bsfCore/Components/BsCRenderable.h"
#include "BsScriptCRenderable.generated.h"
#include "../../../Foundation/bsfCore/Components/BsCRigidbody.h"
#include "BsScriptCRigidbody.generated.h"
#include "../../../Foundation/bsfCore/Components/BsCSkybox.h"
#include "BsScriptCSkybox.generated.h"
#include "../../../Foundation/bsfCore/Components/BsCSliderJoint.h"
#include "BsScriptCSliderJoint.generated.h"
#include "../../../Foundation/bsfCore/Components/BsCSphereCollider.h"
#include "BsScriptCSphereCollider.generated.h"

namespace bs
{
	LOOKUP_BEGIN
		ADD_ENTRY(CCamera, ScriptCCamera)
		ADD_ENTRY(CBoxCollider, ScriptCBoxCollider)
		ADD_ENTRY(CAudioListener, ScriptCAudioListener)
		ADD_ENTRY(CCharacterController, ScriptCCharacterController)
		ADD_ENTRY(CAnimation, ScriptCAnimation)
		ADD_ENTRY(CAudioSource, ScriptCAudioSource)
		ADD_ENTRY(CBone, ScriptCBone)
		ADD_ENTRY(CCollider, ScriptCCollider)
		ADD_ENTRY(CCapsuleCollider, ScriptCCapsuleCollider)
		ADD_ENTRY(CJoint, ScriptCJoint)
		ADD_ENTRY(CD6Joint, ScriptCD6Joint)
		ADD_ENTRY(CDecal, ScriptCDecal)
		ADD_ENTRY(CDistanceJoint, ScriptCDistanceJoint)
		ADD_ENTRY(CFixedJoint, ScriptCFixedJoint)
		ADD_ENTRY(CHingeJoint, ScriptCHingeJoint)
		ADD_ENTRY(CLight, ScriptCLight)
		ADD_ENTRY(CLightProbeVolume, ScriptCLightProbeVolume)
		ADD_ENTRY(CMeshCollider, ScriptCMeshCollider)
		ADD_ENTRY(CSphericalJoint, ScriptCSphericalJoint)
		ADD_ENTRY(CReflectionProbe, ScriptCReflectionProbe)
		ADD_ENTRY(CParticleSystem, ScriptCParticleSystem)
		ADD_ENTRY(CPlaneCollider, ScriptCPlaneCollider)
		ADD_ENTRY(CRenderable, ScriptCRenderable)
		ADD_ENTRY(CRigidbody, ScriptCRigidbody)
		ADD_ENTRY(CSkybox, ScriptCSkybox)
		ADD_ENTRY(CSliderJoint, ScriptCSliderJoint)
		ADD_ENTRY(CSphereCollider, ScriptCSphereCollider)
	LOOKUP_END
}
#undef LOOKUP_BEGIN
#undef ADD_ENTRY
#undef LOOKUP_END
