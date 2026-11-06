#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class UltimatumSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UltimatumSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "UltimatumSystem") {}
    public:
        float AcceptanceChance(int senderId, int targetId, void* terms, void* target, void* targetIt, int targetCompletedFactories, float senderOpinionOfTarget, float targetOpinionOfSender, void* power, void* cfg, float identityThin = 1f, float leverage = 0f, float peoplesSeverity = 0f, int senderVassals = 0, void* answererIt = nullptr) const { void* args[] = { &senderId, &targetId, terms, target, targetIt, &targetCompletedFactories, &senderOpinionOfTarget, &targetOpinionOfSender, power, cfg, &identityThin, &leverage, &peoplesSeverity, &senderVassals, answererIt }; return CallStaticValue<float>("AcceptanceChance", args, 15); }
        float Severity(void* terms, void* target, void* targetIt, int targetCompletedFactories, void* cfg, float identityThin = 1f, float peoplesSeverity = 0f) const { void* args[] = { terms, target, targetIt, &targetCompletedFactories, cfg, &identityThin, &peoplesSeverity }; return CallStaticValue<float>("Severity", args, 7); }
        bool HasSubstance(void* terms) const { void* args[] = { terms }; return CallStaticValue<bool>("HasSubstance", args, 1); }
    };
}
