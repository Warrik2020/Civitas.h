#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Progression
{
    class RecruitOutcomes : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit RecruitOutcomes(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Progression", "RecruitOutcomes") {}
    public:
        void OfRaise(void* o, void* it, void* t, void* cfg, void* icfg, float gold, float ticksPerMonth) const { void* __callArgs[] = { o, it, t, cfg, icfg, &gold, &ticksPerMonth }; CallStatic("OfRaise", __callArgs, 7); }
    };
}
