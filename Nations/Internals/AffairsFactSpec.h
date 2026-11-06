#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AffairsFactSpec : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsFactSpec(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AffairsFactSpec") {}
    public:
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* args() const { return ReadField<void*>("args"); }
        void SetArgs(void* value) const { WriteField<void*>("args", value); }
        int required() const { return ReadField<int>("required"); }
        void SetRequired(int value) const { WriteField<int>("required", value); }
        void* bands() const { return ReadField<void*>("bands"); }
        void SetBands(void* value) const { WriteField<void*>("bands", value); }
        void* values() const { return ReadField<void*>("values"); }
        void SetValues(void* value) const { WriteField<void*>("values", value); }
        void* fn() const { return ReadField<void*>("fn"); }
        void SetFn(void* value) const { WriteField<void*>("fn", value); }
        bool cause() const { return ReadField<bool>("cause"); }
        void SetCause(bool value) const { WriteField<bool>("cause", value); }
        void* restates() const { return ReadField<void*>("restates"); }
        void SetRestates(void* value) const { WriteField<void*>("restates", value); }
        bool anyBand() const { return ReadField<bool>("anyBand"); }
        void SetAnyBand(bool value) const { WriteField<bool>("anyBand", value); }
        void* coveredBy() const { return ReadField<void*>("coveredBy"); }
        void SetCoveredBy(void* value) const { WriteField<void*>("coveredBy", value); }
    };
}
