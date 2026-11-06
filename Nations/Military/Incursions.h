#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class Incursions : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Incursions(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "Incursions") {}
    public:
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        int64_t DirKey(int violator, int host) const { void* args[] = { &violator, &host }; return CallStaticValue<int64_t>("DirKey", args, 2); }
        int DirViolator(int64_t key) const { void* args[] = { &key }; return CallStaticValue<int>("DirViolator", args, 1); }
        int DirHost(int64_t key) const { void* args[] = { &key }; return CallStaticValue<int>("DirHost", args, 1); }
        int HostOf(void* d) const { void* args[] = { d }; return CallStaticValue<int>("HostOf", args, 1); }
        void* Check(void* d, int host, void* aim, void* grid, void* mil, bool sharesBorder) const { void* args[] = { d, &host, aim, grid, mil, &sharesBorder }; return CallStatic("Check", args, 6); }
        bool SharesBorder(void* mil, int host, void* grid) const { void* args[] = { mil, &host, grid }; return CallStaticValue<bool>("SharesBorder", args, 3); }
        void Authorize(void* d, int host) const { void* args[] = { d, &host }; CallStatic("Authorize", args, 2); }
        void Release(void* d) const { void* args[] = { d }; CallStatic("Release", args, 1); }
        bool SetStance(void* d, int stance) const { void* args[] = { d, &stance }; return CallStaticValue<bool>("SetStance", args, 2); }
        float FootprintRadius(void* d) const { void* args[] = { d }; return CallStaticValue<float>("FootprintRadius", args, 1); }
        bool Forages(void* d) const { void* args[] = { d }; return CallStaticValue<bool>("Forages", args, 1); }
        bool BeyondSupply(void* d) const { void* args[] = { d }; return CallStaticValue<bool>("BeyondSupply", args, 1); }
        bool LocksDown(void* d) const { void* args[] = { d }; return CallStaticValue<bool>("LocksDown", args, 1); }
        bool BoundForHost(void* d, void* grid) const { void* args[] = { d, grid }; return CallStaticValue<bool>("BoundForHost", args, 2); }
        void StampSupply(void* d, void* mil, void* grid, void* connectivity, int tick) const { void* args[] = { d, mil, grid, connectivity, &tick }; CallStatic("StampSupply", args, 5); }
        void RefreshAnchors(void* mil, void* grid, void* connectivity) const { void* args[] = { mil, grid, connectivity }; CallStatic("RefreshAnchors", args, 3); }
        float EstimateDepth(void* mil, void* grid, int tile, int host, float cap) const { void* args[] = { mil, grid, &tile, &host, &cap }; return CallStaticValue<float>("EstimateDepth", args, 5); }
        void SteerAtWar(void* mil, void* n, void* grid, void* connectivity) const { void* args[] = { mil, n, grid, connectivity }; CallStatic("SteerAtWar", args, 4); }
        bool Hostile(void* d, void* e) const { void* args[] = { d, e }; return CallStaticValue<bool>("Hostile", args, 2); }
        bool SkirmishActive(int violator, int host) const { void* args[] = { &violator, &host }; return CallStaticValue<bool>("SkirmishActive", args, 2); }
        bool Skirmishing(int a, int b) const { void* args[] = { &a, &b }; return CallStaticValue<bool>("Skirmishing", args, 2); }
        bool Attacking(int violator, int host) const { void* args[] = { &violator, &host }; return CallStaticValue<bool>("Attacking", args, 2); }
        void SetCounterDeploy(int host, int violator, bool on) const { void* args[] = { &host, &violator, &on }; CallStatic("SetCounterDeploy", args, 3); }
        void ClearCounterDeploy() const { CallStatic("ClearCounterDeploy", nullptr, 0); }
        void SetExcused(int violator, int host) const { void* args[] = { &violator, &host }; CallStatic("SetExcused", args, 2); }
        bool Excused(int violator, int host) const { void* args[] = { &violator, &host }; return CallStaticValue<bool>("Excused", args, 2); }
        bool CounterDeploying(int host, int violator) const { void* args[] = { &host, &violator }; return CallStaticValue<bool>("CounterDeploying", args, 2); }
        void NoteSkirmishLoss(int loser, int other, float men) const { void* args[] = { &loser, &other, &men }; CallStatic("NoteSkirmishLoss", args, 3); }
        void DrainSkirmishLosses(void* into) const { void* args[] = { into }; CallStatic("DrainSkirmishLosses", args, 1); }
        void DebugForceSkirmish(int violator, int host, bool on) const { void* args[] = { &violator, &host, &on }; CallStatic("DebugForceSkirmish", args, 3); }
        int OwnCount(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<int>("OwnCount", args, 1); }
        int GuestCount(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<int>("GuestCount", args, 1); }
        int CountAbroad(int occupier, int host) const { void* args[] = { &occupier, &host }; return CallStaticValue<int>("CountAbroad", args, 2); }
        void* Next(void* match, int afterId) const { void* args[] = { match, &afterId }; return CallStatic("Next", args, 2); }
        void Rebuild(void* militaries, void* milById, void* getNation, void* internals, void* grid) const { void* args[] = { militaries, milById, getNation, internals, grid }; CallStatic("Rebuild", args, 5); }
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void SetEnabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
        int occupier() const { return ReadField<int>("occupier"); }
        void SetOccupier(int value) const { WriteField<int>("occupier", value); }
        int host() const { return ReadField<int>("host"); }
        void SetHost(int value) const { WriteField<int>("host", value); }
        int abroad() const { return ReadField<int>("abroad"); }
        void SetAbroad(int value) const { WriteField<int>("abroad", value); }
        int authorized() const { return ReadField<int>("authorized"); }
        void SetAuthorized(int value) const { WriteField<int>("authorized", value); }
        float maxDepth() const { return ReadField<float>("maxDepth"); }
        void SetMaxDepth(float value) const { WriteField<float>("maxDepth", value); }
        float strength() const { return ReadField<float>("strength"); }
        void SetStrength(float value) const { WriteField<float>("strength", value); }
        int firstStateId() const { return ReadField<int>("firstStateId"); }
        void SetFirstStateId(int value) const { WriteField<int>("firstStateId", value); }
    };
}
