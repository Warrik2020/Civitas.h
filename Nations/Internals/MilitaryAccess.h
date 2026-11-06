#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class MilitaryAccess : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MilitaryAccess(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "MilitaryAccess") {}
    public:
        float AskOpinion() const { return ReadStaticField<float>("AskOpinion"); }
        float KeepOpinion() const { return ReadStaticField<float>("KeepOpinion"); }
        float WartimeSlack() const { return ReadStaticField<float>("WartimeSlack"); }
        bool AiEnabled() const { return ReadStaticField<bool>("AiEnabled"); }
        void AiEnabled(bool value) const { WriteStaticField<bool>("AiEnabled", value); }
        int AiMaxHosts() const { return ReadStaticField<int>("AiMaxHosts"); }
        int AiAskCooldownDays() const { return ReadStaticField<int>("AiAskCooldownDays"); }
        int AiMaxPendingCards() const { return ReadStaticField<int>("AiMaxPendingCards"); }
    };
}
