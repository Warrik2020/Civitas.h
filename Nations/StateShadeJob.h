#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class StateShadeJob : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit StateShadeJob(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "StateShadeJob") {}
    public:
        void Execute(int y) const { void* args[] = { &y }; Call("Execute", args, 1); }
        void* owner() const { return ReadField<void*>("owner"); }
        void SetOwner(void* value) const { WriteField<void*>("owner", value); }
        void* stateId() const { return ReadField<void*>("stateId"); }
        void SetStateId(void* value) const { WriteField<void*>("stateId", value); }
        void* fillById() const { return ReadField<void*>("fillById"); }
        void SetFillById(void* value) const { WriteField<void*>("fillById", value); }
        int fillCount() const { return ReadField<int>("fillCount"); }
        void SetFillCount(int value) const { WriteField<int>("fillCount", value); }
        void* states() const { return ReadField<void*>("states"); }
        void SetStates(void* value) const { WriteField<void*>("states", value); }
        int stateCount() const { return ReadField<int>("stateCount"); }
        void SetStateCount(int value) const { WriteField<int>("stateCount", value); }
        void* texels() const { return ReadField<void*>("texels"); }
        void SetTexels(void* value) const { WriteField<void*>("texels", value); }
        void* blockDirty() const { return ReadField<void*>("blockDirty"); }
        void SetBlockDirty(void* value) const { WriteField<void*>("blockDirty", value); }
        void* anyContent() const { return ReadField<void*>("anyContent"); }
        void SetAnyContent(void* value) const { WriteField<void*>("anyContent", value); }
        int width() const { return ReadField<int>("width"); }
        void SetWidth(int value) const { WriteField<int>("width", value); }
        int blocksX() const { return ReadField<int>("blocksX"); }
        void SetBlocksX(int value) const { WriteField<int>("blocksX", value); }
        int blockSize() const { return ReadField<int>("blockSize"); }
        void SetBlockSize(int value) const { WriteField<int>("blockSize", value); }
        void* chunkLand() const { return ReadField<void*>("chunkLand"); }
        void SetChunkLand(void* value) const { WriteField<void*>("chunkLand", value); }
        int chunksX() const { return ReadField<int>("chunksX"); }
        void SetChunksX(int value) const { WriteField<int>("chunksX", value); }
        bool variation() const { return ReadField<bool>("variation"); }
        void SetVariation(bool value) const { WriteField<bool>("variation", value); }
        float variationStrength() const { return ReadField<float>("variationStrength"); }
        void SetVariationStrength(float value) const { WriteField<float>("variationStrength", value); }
        float variationScaleTiles() const { return ReadField<float>("variationScaleTiles"); }
        void SetVariationScaleTiles(float value) const { WriteField<float>("variationScaleTiles", value); }
        float homeRuleTint() const { return ReadField<float>("homeRuleTint"); }
        void SetHomeRuleTint(float value) const { WriteField<float>("homeRuleTint", value); }
        float jitter() const { return ReadField<float>("jitter"); }
        void SetJitter(float value) const { WriteField<float>("jitter", value); }
        float disloyalFrom() const { return ReadField<float>("disloyalFrom"); }
        void SetDisloyalFrom(float value) const { WriteField<float>("disloyalFrom", value); }
        float alpha() const { return ReadField<float>("alpha"); }
        void SetAlpha(float value) const { WriteField<float>("alpha", value); }
        float disloyalAlpha() const { return ReadField<float>("disloyalAlpha"); }
        void SetDisloyalAlpha(float value) const { WriteField<float>("disloyalAlpha", value); }
        void* disloyal() const { return ReadField<void*>("disloyal"); }
        void SetDisloyal(void* value) const { WriteField<void*>("disloyal", value); }
        int ownerId() const { return ReadField<int>("ownerId"); }
        void SetOwnerId(int value) const { WriteField<int>("ownerId", value); }
        float loyalty() const { return ReadField<float>("loyalty"); }
        void SetLoyalty(float value) const { WriteField<float>("loyalty", value); }
        uint8_t hasPolity() const { return ReadField<uint8_t>("hasPolity"); }
        void SetHasPolity(uint8_t value) const { WriteField<uint8_t>("hasPolity", value); }
        uint8_t homeRule() const { return ReadField<uint8_t>("homeRule"); }
        void SetHomeRule(uint8_t value) const { WriteField<uint8_t>("homeRule", value); }
    };
}
