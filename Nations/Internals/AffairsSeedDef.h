#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AffairsSeedDef : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsSeedDef(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AffairsSeedDef") {}
    public:
        float weight() const { return ReadField<float>("weight"); }
        void SetWeight(float value) const { WriteField<float>("weight", value); }
        void* when() const { return ReadField<void*>("when"); }
        void SetWhen(void* value) const { WriteField<void*>("when", value); }
        int incident() const { return ReadField<int>("incident"); }
        void SetIncident(int value) const { WriteField<int>("incident", value); }
        void* cause() const { return ReadField<void*>("cause"); }
        void SetCause(void* value) const { WriteField<void*>("cause", value); }
        int line() const { return ReadField<int>("line"); }
        void SetLine(int value) const { WriteField<int>("line", value); }
    };
}
