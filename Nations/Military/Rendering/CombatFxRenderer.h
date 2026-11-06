#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Rendering
{
    class CombatFxRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CombatFxRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Rendering", "CombatFxRenderer") {}
    public:
        void Dispose() const { Call("Dispose", nullptr, 0); }
        void SetVisible(bool visible) const { void* args[] = { &visible }; Call("SetVisible", args, 1); }
        void Sync(void* militaries, void* cam, int tick, float dt) const { void* args[] = { militaries, cam, &tick, &dt }; Call("Sync", args, 4); }
        void SpawnDeathExplosion(void* renderPos, float body, void* nationColor) const { void* args[] = { renderPos, &body, nationColor }; Call("SpawnDeathExplosion", args, 3); }
        void SpawnRoutBurst(void* renderPos, float body, void* nationColor) const { void* args[] = { renderPos, &body, nationColor }; Call("SpawnRoutBurst", args, 3); }
        void SpawnWithdrawPuff(void* renderPos, float body, void* rearward) const { void* args[] = { renderPos, &body, rearward }; Call("SpawnWithdrawPuff", args, 3); }
        void SpawnMusterPuff(void* pos, float body, void* nationColor) const { void* args[] = { pos, &body, nationColor }; Call("SpawnMusterPuff", args, 3); }
        void SpawnConquestFleck(void* tileCentre, void* winnerColor) const { void* args[] = { tileCentre, winnerColor }; Call("SpawnConquestFleck", args, 2); }
        void StartCapitalFire(void* tileCentre) const { void* args[] = { tileCentre }; Call("StartCapitalFire", args, 1); }
        float HandoffSuppress() const { return ReadField<float>("HandoffSuppress"); }
        void SetHandoffSuppress(float value) const { WriteField<float>("HandoffSuppress", value); }
        void* pos() const { return ReadField<void*>("pos"); }
        void SetPos(void* value) const { WriteField<void*>("pos", value); }
        float until() const { return ReadField<float>("until"); }
        void SetUntil(float value) const { WriteField<float>("until", value); }
    };
}
