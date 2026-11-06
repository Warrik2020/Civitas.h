#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class UnitContact : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnitContact(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "UnitContact") {}
    public:
        int Fire(int k) const { void* args[] = { &k }; return CallValue<int>("Fire", args, 1); }
        int f0() const { return ReadField<int>("f0"); }
        void SetF0(int value) const { WriteField<int>("f0", value); }
        int f1() const { return ReadField<int>("f1"); }
        void SetF1(int value) const { WriteField<int>("f1", value); }
        int f2() const { return ReadField<int>("f2"); }
        void SetF2(int value) const { WriteField<int>("f2", value); }
        int f3() const { return ReadField<int>("f3"); }
        void SetF3(int value) const { WriteField<int>("f3", value); }
        int m0() const { return ReadField<int>("m0"); }
        void SetM0(int value) const { WriteField<int>("m0", value); }
        int m1() const { return ReadField<int>("m1"); }
        void SetM1(int value) const { WriteField<int>("m1", value); }
        float foeDist() const { return ReadField<float>("foeDist"); }
        void SetFoeDist(float value) const { WriteField<float>("foeDist", value); }
        int foe() const { return ReadField<int>("foe"); }
        void SetFoe(int value) const { WriteField<int>("foe", value); }
    };
}
