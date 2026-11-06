#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AffairsEffectDef : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsEffectDef(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AffairsEffectDef") {}
    public:
        void* verb() const { return ReadField<void*>("verb"); }
        void verb(void* value) const { WriteField<void*>("verb", value); }
        void* args() const { return ReadField<void*>("args"); }
        void args(void* value) const { WriteField<void*>("args", value); }
        void* nums() const { return ReadField<void*>("nums"); }
        void nums(void* value) const { WriteField<void*>("nums", value); }
        void* spec() const { return ReadField<void*>("spec"); }
        void spec(void* value) const { WriteField<void*>("spec", value); }
        int line() const { return ReadField<int>("line"); }
        void line(int value) const { WriteField<int>("line", value); }
    };
}
