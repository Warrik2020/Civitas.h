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
        void Execute(int y) const { void* __callArgs[] = { &y }; Call("Execute", __callArgs, 1); }
        void* owner() const { return ReadField<void*>("owner"); }
        void owner(void* value) const { WriteField<void*>("owner", value); }
        void* stateId() const { return ReadField<void*>("stateId"); }
        void stateId(void* value) const { WriteField<void*>("stateId", value); }
        void* fillById() const { return ReadField<void*>("fillById"); }
        void fillById(void* value) const { WriteField<void*>("fillById", value); }
        int fillCount() const { return ReadField<int>("fillCount"); }
        void fillCount(int value) const { WriteField<int>("fillCount", value); }
        void* states() const { return ReadField<void*>("states"); }
        void states(void* value) const { WriteField<void*>("states", value); }
        int stateCount() const { return ReadField<int>("stateCount"); }
        void stateCount(int value) const { WriteField<int>("stateCount", value); }
        void* texels() const { return ReadField<void*>("texels"); }
        void texels(void* value) const { WriteField<void*>("texels", value); }
        void* blockDirty() const { return ReadField<void*>("blockDirty"); }
        void blockDirty(void* value) const { WriteField<void*>("blockDirty", value); }
        void* anyContent() const { return ReadField<void*>("anyContent"); }
        void anyContent(void* value) const { WriteField<void*>("anyContent", value); }
        int width() const { return ReadField<int>("width"); }
        void width(int value) const { WriteField<int>("width", value); }
        int blocksX() const { return ReadField<int>("blocksX"); }
        void blocksX(int value) const { WriteField<int>("blocksX", value); }
        int blockSize() const { return ReadField<int>("blockSize"); }
        void blockSize(int value) const { WriteField<int>("blockSize", value); }
        void* chunkLand() const { return ReadField<void*>("chunkLand"); }
        void chunkLand(void* value) const { WriteField<void*>("chunkLand", value); }
        int chunksX() const { return ReadField<int>("chunksX"); }
        void chunksX(int value) const { WriteField<int>("chunksX", value); }
        bool variation() const { return ReadField<bool>("variation"); }
        void variation(bool value) const { WriteField<bool>("variation", value); }
        float variationStrength() const { return ReadField<float>("variationStrength"); }
        void variationStrength(float value) const { WriteField<float>("variationStrength", value); }
        float variationScaleTiles() const { return ReadField<float>("variationScaleTiles"); }
        void variationScaleTiles(float value) const { WriteField<float>("variationScaleTiles", value); }
        float homeRuleTint() const { return ReadField<float>("homeRuleTint"); }
        void homeRuleTint(float value) const { WriteField<float>("homeRuleTint", value); }
        float jitter() const { return ReadField<float>("jitter"); }
        void jitter(float value) const { WriteField<float>("jitter", value); }
        float disloyalFrom() const { return ReadField<float>("disloyalFrom"); }
        void disloyalFrom(float value) const { WriteField<float>("disloyalFrom", value); }
        float alpha() const { return ReadField<float>("alpha"); }
        void alpha(float value) const { WriteField<float>("alpha", value); }
        float disloyalAlpha() const { return ReadField<float>("disloyalAlpha"); }
        void disloyalAlpha(float value) const { WriteField<float>("disloyalAlpha", value); }
        void* disloyal() const { return ReadField<void*>("disloyal"); }
        void disloyal(void* value) const { WriteField<void*>("disloyal", value); }
    };
}
