#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class QuickContext : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit QuickContext(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "QuickContext") {}
    public:
        void* nations() const { return ReadField<void*>("nations"); }
        void SetNations(void* value) const { WriteField<void*>("nations", value); }
        void* internals() const { return ReadField<void*>("internals"); }
        void SetInternals(void* value) const { WriteField<void*>("internals", value); }
        void* expansion() const { return ReadField<void*>("expansion"); }
        void SetExpansion(void* value) const { WriteField<void*>("expansion", value); }
        void* frontlines() const { return ReadField<void*>("frontlines"); }
        void SetFrontlines(void* value) const { WriteField<void*>("frontlines", value); }
        void* military() const { return ReadField<void*>("military"); }
        void SetMilitary(void* value) const { WriteField<void*>("military", value); }
        void* industry() const { return ReadField<void*>("industry"); }
        void SetIndustry(void* value) const { WriteField<void*>("industry", value); }
        void* hud() const { return ReadField<void*>("hud"); }
        void SetHud(void* value) const { WriteField<void*>("hud", value); }
        void* revolts() const { return ReadField<void*>("revolts"); }
        void SetRevolts(void* value) const { WriteField<void*>("revolts", value); }
        void* identity() const { return ReadField<void*>("identity"); }
        void SetIdentity(void* value) const { WriteField<void*>("identity", value); }
    };
}
