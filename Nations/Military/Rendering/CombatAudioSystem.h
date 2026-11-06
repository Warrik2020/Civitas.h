#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Rendering
{
    class CombatAudioSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CombatAudioSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Rendering", "CombatAudioSystem") {}
    public:
        void Dispose() const { Call("Dispose", nullptr, 0); }
        void SetClipSet(const char* set) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(set ? set : "") : nullptr; void* args[] = { managed_0 }; Call("SetClipSet", args, 1); }
        void Sync(void* militaries, void* cam, int tick, bool layerVisible) const { void* args[] = { militaries, cam, &tick, &layerVisible }; Call("Sync", args, 4); }
    };
}
