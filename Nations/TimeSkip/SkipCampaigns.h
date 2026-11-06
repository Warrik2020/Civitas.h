#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::TimeSkip
{
    class SkipCampaigns : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SkipCampaigns(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.TimeSkip", "SkipCampaigns") {}
    public:
        void Begin(void* world, void* marches, float clamp) const { void* __callArgs[] = { world, marches, &clamp }; Call("Begin", __callArgs, 3); }
        void Finish() const { Call("Finish", nullptr, 0); }
        bool TryStrengths(void* rel, int id, float& own, float& other) const { void* __callArgs[] = { rel, &id, &own, &other }; return CallValue<bool>("TryStrengths", __callArgs, 4); }
        void Step(float monthShare, int monthTicks) const { void* __callArgs[] = { &monthShare, &monthTicks }; Call("Step", __callArgs, 2); }
    };
}
