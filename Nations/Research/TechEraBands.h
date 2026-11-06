#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Research
{
    class TechEraBands : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TechEraBands(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Research", "TechEraBands") {}
    public:
        int IndexOf(float tier) const { void* args[] = { &tier }; return CallStaticValue<int>("IndexOf", args, 1); }
        void* Years(int band) const { void* args[] = { &band }; return CallStatic("Years", args, 1); }
        void* Name(int band) const { void* args[] = { &band }; return CallStatic("Name", args, 1); }
        int Current() const { return CallStaticValue<int>("Current", nullptr, 0); }
        void* All() const { return ReadStaticField<void*>("All"); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        float fromTier() const { return ReadField<float>("fromTier"); }
        void SetFromTier(float value) const { WriteField<float>("fromTier", value); }
        float toTier() const { return ReadField<float>("toTier"); }
        void SetToTier(float value) const { WriteField<float>("toTier", value); }
    };
}
