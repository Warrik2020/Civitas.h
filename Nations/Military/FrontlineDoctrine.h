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
        int ResolveComp(void* connectivity, int version, void* grid, int nationId, void* pos, void* outward) const { void* args[] = { connectivity, &version, grid, &nationId, pos, outward }; return CallStaticValue<int>("ResolveComp", args, 6); }
        int DepthPosts(float opposing, float ourMeanPower) const { void* args[] = { &opposing, &ourMeanPower }; return CallStaticValue<int>("DepthPosts", args, 2); }
        void* DepthPost(void* linePos, void* outward, int k, int nationId, void* grid) const { void* args[] = { linePos, outward, &k, &nationId, grid }; return CallStatic("DepthPost", args, 5); }
        bool CorridorOk(void* pos, void* outward, int nationId, void* grid, void* atWarEnemies) const { void* args[] = { pos, outward, &nationId, grid, atWarEnemies }; return CallStaticValue<bool>("CorridorOk", args, 5); }
        void* ExploitAim(void* pos, void* outward, bool hasObjective, void* objectiveDir, void* cfg) const { void* args[] = { pos, outward, &hasObjective, objectiveDir, cfg }; return CallStatic("ExploitAim", args, 5); }
        bool BreakoutAim(void* from, void* home, int nationId, void* grid, void* connectivity, int version, void* aim, void* dir) const { void* args[] = { from, home, &nationId, grid, connectivity, &version, &aim, &dir }; return CallStaticValue<bool>("BreakoutAim", args, 8); }
        float SpawnCityScore(float distToMark, int crowd, int recentHits, float recentPenalty) const { void* args[] = { &distToMark, &crowd, &recentHits, &recentPenalty }; return CallStaticValue<float>("SpawnCityScore", args, 4); }
        bool HasFreshMarks(void* mil, int tick) const { void* args[] = { mil, &tick }; return CallStaticValue<bool>("HasFreshMarks", args, 2); }
    };
}
