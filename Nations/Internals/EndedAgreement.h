#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class EndedAgreement : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit EndedAgreement(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "EndedAgreement") {}
    public:
        void* agreement() const { return ReadField<void*>("agreement"); }
        void agreement(void* value) const { WriteField<void*>("agreement", value); }
        int why() const { return ReadField<int>("why"); }
        void why(int value) const { WriteField<int>("why", value); }
        int tick() const { return ReadField<int>("tick"); }
        void tick(int value) const { WriteField<int>("tick", value); }
    };
}
