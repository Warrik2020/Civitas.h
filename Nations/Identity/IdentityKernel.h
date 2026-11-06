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
        void Tick(int axisId, void* rt, void* grid, void* cfg, void* ctx, float ticksPerYear, int tick, int maxEvents, int rescanChunks, void* onDominanceChanged, void* companions) const { void* __callArgs[] = { &axisId, rt, grid, cfg, ctx, &ticksPerYear, &tick, &maxEvents, &rescanChunks, onDominanceChanged, companions }; CallStatic("Tick", __callArgs, 11); }
        void Begin(void* p, int axisId, void* rt, void* grid, void* cfg, void* ctx, float ticksPerYear, int tick, int maxEvents, int rescanChunks, void* onDominanceChanged, void* companions) const { void* __callArgs[] = { p, &axisId, rt, grid, cfg, ctx, &ticksPerYear, &tick, &maxEvents, &rescanChunks, onDominanceChanged, companions }; CallStatic("Begin", __callArgs, 12); }
        bool Step(void* p, int64_t deadline) const { void* __callArgs[] = { p, &deadline }; return CallStaticValue<bool>("Step", __callArgs, 2); }
        float FloorFor(void* cfg, void* ctx, int axisBase, int owner, int tile, int root) const { void* __callArgs[] = { cfg, ctx, &axisBase, &owner, &tile, &root }; return CallStaticValue<float>("FloorFor", __callArgs, 6); }
        uint8_t RungByte(void* ctx, int axis, int owner, int root, bool zoneTile) const { void* __callArgs[] = { ctx, &axis, &owner, &root, &zoneTile }; return CallStaticValue<uint8_t>("RungByte", __callArgs, 5); }
        uint8_t OrderFlagsOf(void* ctx, int axis, int owner) const { void* __callArgs[] = { ctx, &axis, &owner }; return CallStaticValue<uint8_t>("OrderFlagsOf", __callArgs, 3); }
        bool IsOfficialRoot(void* ctx, int axis, int owner, int root) const { void* __callArgs[] = { ctx, &axis, &owner, &root }; return CallStaticValue<bool>("IsOfficialRoot", __callArgs, 4); }
        bool InZone(void* ctx, int tile, int owner, int axisBit) const { void* __callArgs[] = { ctx, &tile, &owner, &axisBit }; return CallStaticValue<bool>("InZone", __callArgs, 4); }
        int Classify(int axisId, void* rt, void* grid, void* ctx, int x, int y) const { void* __callArgs[] = { &axisId, rt, grid, ctx, &x, &y }; return CallStaticValue<int>("Classify", __callArgs, 6); }
        bool OnCrownFront(int axisId, void* rt, void* grid, void* ctx, int tile) const { void* __callArgs[] = { &axisId, rt, grid, ctx, &tile }; return CallStaticValue<bool>("OnCrownFront", __callArgs, 5); }
        void Reevaluate(int axisId, void* rt, void* grid, void* ctx, int tileIndex) const { void* __callArgs[] = { &axisId, rt, grid, ctx, &tileIndex }; CallStatic("Reevaluate", __callArgs, 5); }
        void RescanChunk(int axisId, void* rt, void* grid, void* ctx, int chunk) const { void* __callArgs[] = { &axisId, rt, grid, ctx, &chunk }; CallStatic("RescanChunk", __callArgs, 5); }
        bool ApplyMix(int axisId, void* rt, void* grid, int tileIndex, void* next, void* ctx, void* onDominanceChanged, bool reclassify = true) const { void* __callArgs[] = { &axisId, rt, grid, &tileIndex, &next, ctx, onDominanceChanged, &reclassify }; return CallStaticValue<bool>("ApplyMix", __callArgs, 8); }
        void SeedTile(int axisId, void* rt, void* grid, int tileIndex, int groupId, void* ctx, void* onDominanceChanged, bool reclassify = true) const { void* __callArgs[] = { &axisId, rt, grid, &tileIndex, &groupId, ctx, onDominanceChanged, &reclassify }; CallStatic("SeedTile", __callArgs, 8); }
        void SetHomeland(void* rt, void* ctx, int x, int y, uint16_t key) const { void* __callArgs[] = { rt, ctx, &x, &y, &key }; CallStatic("SetHomeland", __callArgs, 5); }
        int RootOfGid(void* ctx, int gid) const { void* __callArgs[] = { ctx, &gid }; return CallStaticValue<int>("RootOfGid", __callArgs, 2); }
        int RootOfKey(void* ctx, uint16_t key) const { void* __callArgs[] = { ctx, &key }; return CallStaticValue<int>("RootOfKey", __callArgs, 2); }
        uint8_t RungEqual() const { return ReadStaticField<uint8_t>("RungEqual"); }
        uint8_t RungTolerated() const { return ReadStaticField<uint8_t>("RungTolerated"); }
        uint8_t RungPersecuted() const { return ReadStaticField<uint8_t>("RungPersecuted"); }
        uint8_t RungExpel() const { return ReadStaticField<uint8_t>("RungExpel"); }
        uint8_t RungPurge() const { return ReadStaticField<uint8_t>("RungPurge"); }
    };
}
