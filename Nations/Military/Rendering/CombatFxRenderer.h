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
        void SetVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetVisible", __callArgs, 1); }
        void Sync(void* militaries, void* cam, int tick, float dt) const { void* __callArgs[] = { militaries, cam, &tick, &dt }; Call("Sync", __callArgs, 4); }
        void SpawnDeathExplosion(void* renderPos, float body, void* nationColor) const { void* __callArgs[] = { renderPos, &body, nationColor }; Call("SpawnDeathExplosion", __callArgs, 3); }
        void SpawnRoutBurst(void* renderPos, float body, void* nationColor) const { void* __callArgs[] = { renderPos, &body, nationColor }; Call("SpawnRoutBurst", __callArgs, 3); }
        void SpawnWithdrawPuff(void* renderPos, float body, void* rearward) const { void* __callArgs[] = { renderPos, &body, rearward }; Call("SpawnWithdrawPuff", __callArgs, 3); }
        void SpawnMusterPuff(void* pos, float body, void* nationColor) const { void* __callArgs[] = { pos, &body, nationColor }; Call("SpawnMusterPuff", __callArgs, 3); }
        void SpawnConquestFleck(void* tileCentre, void* winnerColor) const { void* __callArgs[] = { tileCentre, winnerColor }; Call("SpawnConquestFleck", __callArgs, 2); }
        void StartCapitalFire(void* tileCentre) const { void* __callArgs[] = { tileCentre }; Call("StartCapitalFire", __callArgs, 1); }
        float HandoffSuppress() const { return ReadField<float>("HandoffSuppress"); }
        void HandoffSuppress(float value) const { WriteField<float>("HandoffSuppress", value); }
    };
}
