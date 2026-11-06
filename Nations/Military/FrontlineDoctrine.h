#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class FrontlineDoctrine : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FrontlineDoctrine(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "FrontlineDoctrine") {}
    public:
        int ResolveComp(void* connectivity, int version, void* grid, int nationId, void* pos, void* outward) const { void* __callArgs[] = { connectivity, &version, grid, &nationId, pos, outward }; return CallStaticValue<int>("ResolveComp", __callArgs, 6); }
        int DepthPosts(float opposing, float ourMeanPower) const { void* __callArgs[] = { &opposing, &ourMeanPower }; return CallStaticValue<int>("DepthPosts", __callArgs, 2); }
        void* DepthPost(void* linePos, void* outward, int k, int nationId, void* grid) const { void* __callArgs[] = { linePos, outward, &k, &nationId, grid }; return CallStatic("DepthPost", __callArgs, 5); }
        bool CorridorOk(void* pos, void* outward, int nationId, void* grid, void* atWarEnemies) const { void* __callArgs[] = { pos, outward, &nationId, grid, atWarEnemies }; return CallStaticValue<bool>("CorridorOk", __callArgs, 5); }
        void* ExploitAim(void* pos, void* outward, bool hasObjective, void* objectiveDir, void* cfg) const { void* __callArgs[] = { pos, outward, &hasObjective, objectiveDir, cfg }; return CallStatic("ExploitAim", __callArgs, 5); }
        bool BreakoutAim(void* from, void* home, int nationId, void* grid, void* connectivity, int version, void* aim, void* dir) const { void* __callArgs[] = { from, home, &nationId, grid, connectivity, &version, &aim, &dir }; return CallStaticValue<bool>("BreakoutAim", __callArgs, 8); }
        float SpawnCityScore(float distToMark, int crowd, int recentHits, float recentPenalty) const { void* __callArgs[] = { &distToMark, &crowd, &recentHits, &recentPenalty }; return CallStaticValue<float>("SpawnCityScore", __callArgs, 4); }
        bool HasFreshMarks(void* mil, int tick) const { void* __callArgs[] = { mil, &tick }; return CallStaticValue<bool>("HasFreshMarks", __callArgs, 2); }
    };
}
