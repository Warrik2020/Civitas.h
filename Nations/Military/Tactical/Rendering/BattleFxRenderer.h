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
        void Push(void* reqs, int count) const { void* args[] = { reqs, &count }; Call("Push", args, 2); }
        void Advance(float dt) const { void* args[] = { &dt }; Call("Advance", args, 1); }
        void Draw(void* sim, void* cam, void* arenaToWorld, void* bounds, float pxPerTile, float z) const { void* args[] = { sim, cam, arenaToWorld, bounds, &pxPerTile, &z }; Call("Draw", args, 6); }
        void ResetCounters() const { Call("ResetCounters", nullptr, 0); }
        int ShotsThisFrame() const { return ReadField<int>("ShotsThisFrame"); }
        void SetShotsThisFrame(int value) const { WriteField<int>("ShotsThisFrame", value); }
        int BoomsThisFrame() const { return ReadField<int>("BoomsThisFrame"); }
        void SetBoomsThisFrame(int value) const { WriteField<int>("BoomsThisFrame", value); }
        int MeleeThisFrame() const { return ReadField<int>("MeleeThisFrame"); }
        void SetMeleeThisFrame(int value) const { WriteField<int>("MeleeThisFrame", value); }
        int DeathsThisFrame() const { return ReadField<int>("DeathsThisFrame"); }
        void SetDeathsThisFrame(int value) const { WriteField<int>("DeathsThisFrame", value); }
        void* Bursts() const { return ReadField<void*>("Bursts"); }
        bool Modern() const { return ReadField<bool>("Modern"); }
        void SetModern(bool value) const { WriteField<bool>("Modern", value); }
    };
}
