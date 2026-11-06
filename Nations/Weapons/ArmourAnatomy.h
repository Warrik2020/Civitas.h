#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class ArmourAnatomy : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ArmourAnatomy(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "ArmourAnatomy") {}
    public:
        void* Ellipse(float cx, float cy, float rx, float ry, int sides = 16) const { void* args[] = { &cx, &cy, &rx, &ry, &sides }; return CallStatic("Ellipse", args, 5); }
        void* Capsule(void* a, void* b, float r0, float r1, int capSides = 6) const { void* args[] = { a, b, &r0, &r1, &capSides }; return CallStatic("Capsule", args, 5); }
        void* Cap(float cx, float cy, float rx, float ry, int sides, float fromY) const { void* args[] = { &cx, &cy, &rx, &ry, &sides, &fromY }; return CallStatic("Cap", args, 6); }
        void* TorsoSilhouette() const { return CallStatic("TorsoSilhouette", nullptr, 0); }
        void* Side(void* rightAnchor, float side) const { void* args[] = { rightAnchor, &side }; return CallStatic("Side", args, 2); }
        void Check() const { CallStatic("Check", nullptr, 0); }
        bool Apart(void* amin, void* amax, void* bmin, void* bmax) const { void* args[] = { amin, amax, bmin, bmax }; return CallStaticValue<bool>("Apart", args, 4); }
        int Version() const { return ReadStaticField<int>("Version"); }
        float Height() const { return ReadStaticField<float>("Height"); }
        float Crown() const { return ReadStaticField<float>("Crown"); }
        float Brow() const { return ReadStaticField<float>("Brow"); }
        float EyeY() const { return ReadStaticField<float>("EyeY"); }
        float NoseY() const { return ReadStaticField<float>("NoseY"); }
        float MouthY() const { return ReadStaticField<float>("MouthY"); }
        float Chin() const { return ReadStaticField<float>("Chin"); }
        float HeadCy() const { return ReadStaticField<float>("HeadCy"); }
        float HeadRx() const { return ReadStaticField<float>("HeadRx"); }
        float HeadRy() const { return ReadStaticField<float>("HeadRy"); }
        float NeckTop() const { return ReadStaticField<float>("NeckTop"); }
        float NeckBase() const { return ReadStaticField<float>("NeckBase"); }
        float NeckHalf() const { return ReadStaticField<float>("NeckHalf"); }
        float ShoulderY() const { return ReadStaticField<float>("ShoulderY"); }
        float ShoulderX() const { return ReadStaticField<float>("ShoulderX"); }
        float ArmpitY() const { return ReadStaticField<float>("ArmpitY"); }
        float ChestY() const { return ReadStaticField<float>("ChestY"); }
        float ChestHalf() const { return ReadStaticField<float>("ChestHalf"); }
        float WaistY() const { return ReadStaticField<float>("WaistY"); }
        float WaistHalf() const { return ReadStaticField<float>("WaistHalf"); }
        float HipY() const { return ReadStaticField<float>("HipY"); }
        float HipHalf() const { return ReadStaticField<float>("HipHalf"); }
        float Crotch() const { return ReadStaticField<float>("Crotch"); }
        float ElbowY() const { return ReadStaticField<float>("ElbowY"); }
        float WristY() const { return ReadStaticField<float>("WristY"); }
        float FingerY() const { return ReadStaticField<float>("FingerY"); }
        float KneeY() const { return ReadStaticField<float>("KneeY"); }
        float AnkleY() const { return ReadStaticField<float>("AnkleY"); }
        void* ShoulderJoint() const { return ReadStaticField<void*>("ShoulderJoint"); }
        void* Elbow() const { return ReadStaticField<void*>("Elbow"); }
        void* Wrist() const { return ReadStaticField<void*>("Wrist"); }
        void* HandCentre() const { return ReadStaticField<void*>("HandCentre"); }
        void* HipJoint() const { return ReadStaticField<void*>("HipJoint"); }
        void* Knee() const { return ReadStaticField<void*>("Knee"); }
        void* Ankle() const { return ReadStaticField<void*>("Ankle"); }
        float UpperArmR0() const { return ReadStaticField<float>("UpperArmR0"); }
        float UpperArmR1() const { return ReadStaticField<float>("UpperArmR1"); }
        float ForearmR1() const { return ReadStaticField<float>("ForearmR1"); }
        float ThighR0() const { return ReadStaticField<float>("ThighR0"); }
        float ThighR1() const { return ReadStaticField<float>("ThighR1"); }
        float CalfR() const { return ReadStaticField<float>("CalfR"); }
        float AnkleR() const { return ReadStaticField<float>("AnkleR"); }
        void* TorsoProfile() const { return ReadStaticField<void*>("TorsoProfile"); }
        void* Organs() const { return ReadStaticField<void*>("Organs"); }
        void* Joints() const { return ReadStaticField<void*>("Joints"); }
        void* EyeOrgans() const { return ReadStaticField<void*>("EyeOrgans"); }
    };
}
