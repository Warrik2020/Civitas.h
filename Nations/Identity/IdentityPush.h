#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class IdentityPush : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IdentityPush(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "IdentityPush") {}
    public:
        float BoostAt(float px, float py) const { void* args[] = { &px, &py }; return CallValue<float>("BoostAt", args, 2); }
        float SpearHalfWidth(float s) const { void* args[] = { &s }; return CallValue<float>("SpearHalfWidth", args, 1); }
        void SetReach(float r) const { void* args[] = { &r }; Call("SetReach", args, 1); }
        float Expected() const { return CallValue<float>("Expected", nullptr, 0); }
        float Inradius() const { return CallValue<float>("Inradius", nullptr, 0); }
        bool InCapsule(float px, float py, void* a, void* b, float r) const { void* args[] = { &px, &py, a, b, &r }; return CallStaticValue<bool>("InCapsule", args, 5); }
        bool InTriangle(float px, float py, void* a, void* b, void* c) const { void* args[] = { &px, &py, a, b, c }; return CallStaticValue<bool>("InTriangle", args, 5); }
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        uint8_t phase() const { return ReadField<uint8_t>("phase"); }
        void SetPhase(uint8_t value) const { WriteField<uint8_t>("phase", value); }
        int attacker() const { return ReadField<int>("attacker"); }
        void SetAttacker(int value) const { WriteField<int>("attacker", value); }
        int defender() const { return ReadField<int>("defender"); }
        void SetDefender(int value) const { WriteField<int>("defender", value); }
        void* a0() const { return ReadField<void*>("a0"); }
        void SetA0(void* value) const { WriteField<void*>("a0", value); }
        void* a1() const { return ReadField<void*>("a1"); }
        void SetA1(void* value) const { WriteField<void*>("a1", value); }
        void* b0() const { return ReadField<void*>("b0"); }
        void SetB0(void* value) const { WriteField<void*>("b0", value); }
        float halfWidth() const { return ReadField<float>("halfWidth"); }
        void SetHalfWidth(float value) const { WriteField<float>("halfWidth", value); }
        float boost() const { return ReadField<float>("boost"); }
        void SetBoost(float value) const { WriteField<float>("boost", value); }
        float pocketBoost() const { return ReadField<float>("pocketBoost"); }
        void SetPocketBoost(float value) const { WriteField<float>("pocketBoost", value); }
        float tipHalfWidth() const { return ReadField<float>("tipHalfWidth"); }
        void SetTipHalfWidth(float value) const { WriteField<float>("tipHalfWidth", value); }
        int startTick() const { return ReadField<int>("startTick"); }
        void SetStartTick(int value) const { WriteField<int>("startTick", value); }
        int endTick() const { return ReadField<int>("endTick"); }
        void SetEndTick(int value) const { WriteField<int>("endTick", value); }
        int closeByTick() const { return ReadField<int>("closeByTick"); }
        void SetCloseByTick(int value) const { WriteField<int>("closeByTick", value); }
        int x0() const { return ReadField<int>("x0"); }
        void SetX0(int value) const { WriteField<int>("x0", value); }
        int y0() const { return ReadField<int>("y0"); }
        void SetY0(int value) const { WriteField<int>("y0", value); }
        int x1() const { return ReadField<int>("x1"); }
        void SetX1(int value) const { WriteField<int>("x1", value); }
        int y1() const { return ReadField<int>("y1"); }
        void SetY1(int value) const { WriteField<int>("y1", value); }
        float depth() const { return ReadField<float>("depth"); }
        void SetDepth(float value) const { WriteField<float>("depth", value); }
        float depth2() const { return ReadField<float>("depth2"); }
        void SetDepth2(float value) const { WriteField<float>("depth2", value); }
        float best() const { return ReadField<float>("best"); }
        void SetBest(float value) const { WriteField<float>("best", value); }
        int stall() const { return ReadField<int>("stall"); }
        void SetStall(int value) const { WriteField<int>("stall", value); }
        bool reached() const { return ReadField<bool>("reached"); }
        void SetReached(bool value) const { WriteField<bool>("reached", value); }
        float reach() const { return ReadField<float>("reach"); }
        void SetReach(float value) const { WriteField<float>("reach", value); }
        int advanceFrom() const { return ReadField<int>("advanceFrom"); }
        void SetAdvanceFrom(int value) const { WriteField<int>("advanceFrom", value); }
        int advanceTo() const { return ReadField<int>("advanceTo"); }
        void SetAdvanceTo(int value) const { WriteField<int>("advanceTo", value); }
        void* tipA() const { return ReadField<void*>("tipA"); }
        void SetTipA(void* value) const { WriteField<void*>("tipA", value); }
        void* tipB() const { return ReadField<void*>("tipB"); }
        void SetTipB(void* value) const { WriteField<void*>("tipB", value); }
        float pocketDepth() const { return ReadField<float>("pocketDepth"); }
        void SetPocketDepth(float value) const { WriteField<float>("pocketDepth", value); }
    };
}
