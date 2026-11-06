#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Progression
{
    class RealmLadder : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit RealmLadder(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Progression", "RealmLadder") {}
    public:
        void Build(void* r, void* x) const { void* args[] = { r, &x }; CallStatic("Build", args, 2); }
        void* LinkName(int l) const { void* args[] = { &l }; return CallStatic("LinkName", args, 1); }
        void* nation() const { return ReadField<void*>("nation"); }
        void SetNation(void* value) const { WriteField<void*>("nation", value); }
        void* it() const { return ReadField<void*>("it"); }
        void SetIt(void* value) const { WriteField<void*>("it", value); }
        void* icfg() const { return ReadField<void*>("icfg"); }
        void SetIcfg(void* value) const { WriteField<void*>("icfg", value); }
        void* mcfg() const { return ReadField<void*>("mcfg"); }
        void SetMcfg(void* value) const { WriteField<void*>("mcfg", value); }
        void* military() const { return ReadField<void*>("military"); }
        void SetMilitary(void* value) const { WriteField<void*>("military", value); }
        void* industry() const { return ReadField<void*>("industry"); }
        void SetIndustry(void* value) const { WriteField<void*>("industry", value); }
        float ticksPerMonth() const { return ReadField<float>("ticksPerMonth"); }
        void SetTicksPerMonth(float value) const { WriteField<float>("ticksPerMonth", value); }
        int year() const { return ReadField<int>("year"); }
        void SetYear(int value) const { WriteField<int>("year", value); }
    };
}
