#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class StateShadeRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit StateShadeRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "StateShadeRenderer") {}
    public:
        void* FillTable(int capacity) const { void* args[] = { &capacity }; return Call("FillTable", args, 1); }
        void* StateTable(int capacity) const { void* args[] = { &capacity }; return Call("StateTable", args, 1); }
        void BeginPass(void* p, void* owner, void* stateId, int fillCount, int stateCount, void* chunks = nullptr) const { void* args[] = { &p, owner, stateId, &fillCount, &stateCount, chunks }; Call("BeginPass", args, 6); }
        void Step() const { Call("Step", nullptr, 0); }
        void Blank() const { Call("Blank", nullptr, 0); }
        void SetVisible(bool visible) const { void* args[] = { &visible }; Call("SetVisible", args, 1); }
        void Destroy() const { Call("Destroy", nullptr, 0); }
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
    };
}
