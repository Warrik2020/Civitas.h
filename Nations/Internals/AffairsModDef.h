#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AffairsModDef : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsModDef(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AffairsModDef") {}
    public:
        void* field() const { return ReadField<void*>("field"); }
        void SetField(void* value) const { WriteField<void*>("field", value); }
        float value() const { return ReadField<float>("value"); }
        void SetValue(float value) const { WriteField<float>("value", value); }
        int line() const { return ReadField<int>("line"); }
        void SetLine(int value) const { WriteField<int>("line", value); }
    };
}
