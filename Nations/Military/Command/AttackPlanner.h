#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class AttackPlanner : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AttackPlanner(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "AttackPlanner") {}
    public:
        bool Weighs(void* mil) const { void* __callArgs[] = { mil }; return CallStaticValue<bool>("Weighs", __callArgs, 1); }
        float Need(int a, void* mil, int tick, bool ai) const { void* __callArgs[] = { &a, mil, &tick, &ai }; return CallStaticValue<float>("Need", __callArgs, 4); }
        void Decide(void* army, void* line, void* slotter, void* divs, void* mil, void* grid, void* buckets, void* cfg, int tick, bool ai) const { void* __callArgs[] = { army, line, slotter, divs, mil, grid, buckets, cfg, &tick, &ai }; CallStatic("Decide", __callArgs, 10); }
        bool FitsRoom(void* e, void* group, void* d, void* cfg, float& room) const { void* __callArgs[] = { e, group, d, cfg, &room }; return CallStaticValue<bool>("FitsRoom", __callArgs, 5); }
        void NoteSent(void* e, void* group, int from, void* cfg, int tick) const { void* __callArgs[] = { e, group, &from, cfg, &tick }; CallStatic("NoteSent", __callArgs, 5); }
        void FollowUp(void* d, void* mil, void* grid, void* buckets, void* cfg, int tick) const { void* __callArgs[] = { d, mil, grid, buckets, cfg, &tick }; CallStatic("FollowUp", __callArgs, 6); }
        void Committed(void* e, void* group) const { void* __callArgs[] = { e, group }; CallStatic("Committed", __callArgs, 2); }
        bool InReach(void* d, void* e) const { void* __callArgs[] = { d, e }; return CallStaticValue<bool>("InReach", __callArgs, 2); }
        void Order(void* a, void* e, bool hard, float bar, void* mil, void* grid, void* cfg) const { void* __callArgs[] = { a, e, &hard, &bar, mil, grid, cfg }; CallStatic("Order", __callArgs, 7); }
        bool StillAttacking(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<bool>("StillAttacking", __callArgs, 1); }
        bool Ready(void* d, void* cfg) const { void* __callArgs[] = { d, cfg }; return CallStaticValue<bool>("Ready", __callArgs, 2); }
        void* NearestFoe(void* mil, void* buckets, void* p, float radius) const { void* __callArgs[] = { mil, buckets, p, &radius }; return CallStatic("NearestFoe", __callArgs, 4); }
        float JoinSlackTiles() const { return ReadStaticField<float>("JoinSlackTiles"); }
        float CarefulMul() const { return ReadStaticField<float>("CarefulMul"); }
        float AimStepTiles() const { return ReadStaticField<float>("AimStepTiles"); }
        int WeighedMinLevel() const { return ReadStaticField<int>("WeighedMinLevel"); }
        bool FollowUps() const { return ReadStaticField<bool>("FollowUps"); }
        void FollowUps(bool value) const { WriteStaticField<bool>("FollowUps", value); }
        float PlayerAttackOdds() const { return ReadStaticField<float>("PlayerAttackOdds"); }
    };
}
