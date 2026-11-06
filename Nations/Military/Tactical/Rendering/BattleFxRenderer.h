#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical::Rendering
{
    class BattleFxRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleFxRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical.Rendering", "BattleFxRenderer") {}
    public:
        void Hide() const { Call("Hide", nullptr, 0); }
        void Dispose() const { Call("Dispose", nullptr, 0); }
        void Push(void* reqs, int count) const { void* __callArgs[] = { reqs, &count }; Call("Push", __callArgs, 2); }
        void Advance(float dt) const { void* __callArgs[] = { &dt }; Call("Advance", __callArgs, 1); }
        void Draw(void* sim, void* cam, void* arenaToWorld, void* bounds, float pxPerTile, float z) const { void* __callArgs[] = { sim, cam, arenaToWorld, bounds, &pxPerTile, &z }; Call("Draw", __callArgs, 6); }
        void ResetCounters() const { Call("ResetCounters", nullptr, 0); }
        int ShotsThisFrame() const { return ReadField<int>("ShotsThisFrame"); }
        void ShotsThisFrame(int value) const { WriteField<int>("ShotsThisFrame", value); }
        int BoomsThisFrame() const { return ReadField<int>("BoomsThisFrame"); }
        void BoomsThisFrame(int value) const { WriteField<int>("BoomsThisFrame", value); }
        int MeleeThisFrame() const { return ReadField<int>("MeleeThisFrame"); }
        void MeleeThisFrame(int value) const { WriteField<int>("MeleeThisFrame", value); }
        int DeathsThisFrame() const { return ReadField<int>("DeathsThisFrame"); }
        void DeathsThisFrame(int value) const { WriteField<int>("DeathsThisFrame", value); }
        void* Bursts() const { return ReadField<void*>("Bursts"); }
        bool Modern() const { return ReadField<bool>("Modern"); }
        void Modern(bool value) const { WriteField<bool>("Modern", value); }
    };
}
