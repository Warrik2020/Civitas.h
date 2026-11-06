#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::TimeSkip
{
    class SkipWarModel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SkipWarModel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.TimeSkip", "SkipWarModel") {}
    public:
        float Drift(float strengthA, float strengthB, float clamp, bool overseas, float noise01) const { void* args[] = { &strengthA, &strengthB, &clamp, &overseas, &noise01 }; return CallStaticValue<float>("Drift", args, 5); }
        bool Broken(float scoreForSide, float clamp, float strengthSide, float strengthOther) const { void* args[] = { &scoreForSide, &clamp, &strengthSide, &strengthOther }; return CallStaticValue<bool>("Broken", args, 4); }
        void Losses(float menA, float menB, float strengthA, float strengthB, float& lostA, float& lostB) const { void* args[] = { &menA, &menB, &strengthA, &strengthB, &lostA, &lostB }; CallStatic("Losses", args, 6); }
        float Edge(float strengthA, float strengthB) const { void* args[] = { &strengthA, &strengthB }; return CallStaticValue<float>("Edge", args, 2); }
        float AdvanceDepth(float edge, float push, float monthMarchTiles) const { void* args[] = { &edge, &push, &monthMarchTiles }; return CallStaticValue<float>("AdvanceDepth", args, 3); }
        float WedgeHalfWidth(float sectorTiles, int divisions) const { void* args[] = { &sectorTiles, &divisions }; return CallStaticValue<float>("WedgeHalfWidth", args, 2); }
        float ReserveWeight(float enemyStrength, bool border) const { void* args[] = { &enemyStrength, &border }; return CallStaticValue<float>("ReserveWeight", args, 2); }
        float TargetScore(float population, bool capital, bool liberates, float distance, float pad) const { void* args[] = { &population, &capital, &liberates, &distance, &pad }; return CallStaticValue<float>("TargetScore", args, 5); }
    };
}
