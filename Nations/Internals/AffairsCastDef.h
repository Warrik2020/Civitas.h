#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AffairsCastDef : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsCastDef(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AffairsCastDef") {}
    public:
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* selector() const { return ReadField<void*>("selector"); }
        void SetSelector(void* value) const { WriteField<void*>("selector", value); }
        void* args() const { return ReadField<void*>("args"); }
        void SetArgs(void* value) const { WriteField<void*>("args", value); }
        void* spec() const { return ReadField<void*>("spec"); }
        void SetSpec(void* value) const { WriteField<void*>("spec", value); }
        int line() const { return ReadField<int>("line"); }
        void SetLine(int value) const { WriteField<int>("line", value); }
    };
}
