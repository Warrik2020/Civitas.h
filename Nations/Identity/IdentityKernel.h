#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class IdentityKernel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IdentityKernel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "IdentityKernel") {}
    public:
        void WarmWorkers() const { CallStatic("WarmWorkers", nullptr, 0); }
        void ForgetWindow() const { CallStatic("ForgetWindow", nullptr, 0); }
        void Tick(int axisId, void* rt, void* grid, void* cfg, void* ctx, float ticksPerYear, int tick, int maxEvents, int rescanChunks, void* onDominanceChanged, void* companions) const { void* args[] = { &axisId, rt, grid, cfg, ctx, &ticksPerYear, &tick, &maxEvents, &rescanChunks, onDominanceChanged, companions }; CallStatic("Tick", args, 11); }
        void Begin(void* p, int axisId, void* rt, void* grid, void* cfg, void* ctx, float ticksPerYear, int tick, int maxEvents, int rescanChunks, void* onDominanceChanged, void* companions) const { void* args[] = { p, &axisId, rt, grid, cfg, ctx, &ticksPerYear, &tick, &maxEvents, &rescanChunks, onDominanceChanged, companions }; CallStatic("Begin", args, 12); }
        bool Step(void* p, int64_t deadline) const { void* args[] = { p, &deadline }; return CallStaticValue<bool>("Step", args, 2); }
        float FloorFor(void* cfg, void* ctx, int axisBase, int owner, int tile, int root) const { void* args[] = { cfg, ctx, &axisBase, &owner, &tile, &root }; return CallStaticValue<float>("FloorFor", args, 6); }
        uint8_t RungByte(void* ctx, int axis, int owner, int root, bool zoneTile) const { void* args[] = { ctx, &axis, &owner, &root, &zoneTile }; return CallStaticValue<uint8_t>("RungByte", args, 5); }
        uint8_t OrderFlagsOf(void* ctx, int axis, int owner) const { void* args[] = { ctx, &axis, &owner }; return CallStaticValue<uint8_t>("OrderFlagsOf", args, 3); }
        bool IsOfficialRoot(void* ctx, int axis, int owner, int root) const { void* args[] = { ctx, &axis, &owner, &root }; return CallStaticValue<bool>("IsOfficialRoot", args, 4); }
        bool InZone(void* ctx, int tile, int owner, int axisBit) const { void* args[] = { ctx, &tile, &owner, &axisBit }; return CallStaticValue<bool>("InZone", args, 4); }
        int Classify(int axisId, void* rt, void* grid, void* ctx, int x, int y) const { void* args[] = { &axisId, rt, grid, ctx, &x, &y }; return CallStaticValue<int>("Classify", args, 6); }
        bool OnCrownFront(int axisId, void* rt, void* grid, void* ctx, int tile) const { void* args[] = { &axisId, rt, grid, ctx, &tile }; return CallStaticValue<bool>("OnCrownFront", args, 5); }
        void Reevaluate(int axisId, void* rt, void* grid, void* ctx, int tileIndex) const { void* args[] = { &axisId, rt, grid, ctx, &tileIndex }; CallStatic("Reevaluate", args, 5); }
        void RescanChunk(int axisId, void* rt, void* grid, void* ctx, int chunk) const { void* args[] = { &axisId, rt, grid, ctx, &chunk }; CallStatic("RescanChunk", args, 5); }
        bool ApplyMix(int axisId, void* rt, void* grid, int tileIndex, void* next, void* ctx, void* onDominanceChanged, bool reclassify = true) const { void* args[] = { &axisId, rt, grid, &tileIndex, &next, ctx, onDominanceChanged, &reclassify }; return CallStaticValue<bool>("ApplyMix", args, 8); }
        void SeedTile(int axisId, void* rt, void* grid, int tileIndex, int groupId, void* ctx, void* onDominanceChanged, bool reclassify = true) const { void* args[] = { &axisId, rt, grid, &tileIndex, &groupId, ctx, onDominanceChanged, &reclassify }; CallStatic("SeedTile", args, 8); }
        void SetHomeland(void* rt, void* ctx, int x, int y, uint16_t key) const { void* args[] = { rt, ctx, &x, &y, &key }; CallStatic("SetHomeland", args, 5); }
        int RootOfGid(void* ctx, int gid) const { void* args[] = { ctx, &gid }; return CallStaticValue<int>("RootOfGid", args, 2); }
        int RootOfKey(void* ctx, uint16_t key) const { void* args[] = { ctx, &key }; return CallStaticValue<int>("RootOfKey", args, 2); }
        void RunChunk(void* p, int k, void* rec, bool immediate) const { void* args[] = { p, &k, rec, &immediate }; Call("RunChunk", args, 4); }
        void HoistPushes(void* set, int chunk) const { void* args[] = { set, &chunk }; Call("HoistPushes", args, 2); }
        bool InPush(int chunksWide, int chunk, int off) const { void* args[] = { &chunksWide, &chunk, &off }; return CallValue<bool>("InPush", args, 3); }
        void BeginChunk(void* log, void* fr, int chunk, void* snapHome, void* snapHeld, int snapLen, int groupCap) const { void* args[] = { log, fr, &chunk, snapHome, snapHeld, &snapLen, &groupCap }; Call("BeginChunk", args, 7); }
        void EndChunk(void* fr, void* rec) const { void* args[] = { fr, rec }; Call("EndChunk", args, 2); }
        void ForgetWindow() const { Call("ForgetWindow", nullptr, 0); }
        void HoistCompanions(void* companions, int axisId, int chunk) const { void* args[] = { companions, &axisId, &chunk }; Call("HoistCompanions", args, 3); }
        bool Resolve(int axisId, void* rt, void* grid, void* cfg, void* ctx, int chunk, int off, void* rng, float gameYears, void* onDominanceChanged) const { void* args[] = { &axisId, rt, grid, cfg, ctx, &chunk, &off, &rng, &gameYears, onDominanceChanged }; return CallValue<bool>("Resolve", args, 10); }
        int Classify(int axisId, void* rt, void* grid, void* ctx, int x, int y) const { void* args[] = { &axisId, rt, grid, ctx, &x, &y }; return CallValue<int>("Classify", args, 6); }
        bool OnCrownFront(int axisId, void* rt, void* grid, void* ctx, int tile) const { void* args[] = { &axisId, rt, grid, ctx, &tile }; return CallValue<bool>("OnCrownFront", args, 5); }
        void ReevaluateAt(int axisId, void* rt, void* grid, void* ctx, int x, int y) const { void* args[] = { &axisId, rt, grid, ctx, &x, &y }; Call("ReevaluateAt", args, 6); }
        void RescanChunk(int axisId, void* rt, void* grid, void* ctx, int chunk) const { void* args[] = { &axisId, rt, grid, ctx, &chunk }; Call("RescanChunk", args, 5); }
        bool ApplyMixAt(int axisId, void* rt, void* grid, int tileIndex, int x, int y, int chunk, void* old, void* next, void* ctx, void* onDominanceChanged, bool reclassify, bool fromEvent = false) const { void* args[] = { &axisId, rt, grid, &tileIndex, &x, &y, &chunk, &old, &next, ctx, onDominanceChanged, &reclassify, &fromEvent }; return CallValue<bool>("ApplyMixAt", args, 13); }
        uint8_t RungEqual() const { return ReadStaticField<uint8_t>("RungEqual"); }
        uint8_t RungTolerated() const { return ReadStaticField<uint8_t>("RungTolerated"); }
        uint8_t RungPersecuted() const { return ReadStaticField<uint8_t>("RungPersecuted"); }
        uint8_t RungExpel() const { return ReadStaticField<uint8_t>("RungExpel"); }
        uint8_t RungPurge() const { return ReadStaticField<uint8_t>("RungPurge"); }
        bool Wrote() const { return ReadField<bool>("Wrote"); }
        void SetWrote(bool value) const { WriteField<bool>("Wrote", value); }
        void* Log() const { return ReadField<void*>("Log"); }
    };
}
