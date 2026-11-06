#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class MapPeekStrip : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapPeekStrip(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "MapPeekStrip") {}
    public:
        void Build(void* window, const char* eyebrow) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(eyebrow ? eyebrow : "") : nullptr; void* args[] = { window, managed_1 }; Call("Build", args, 2); }
        void Begin(const char* title) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(title ? title : "") : nullptr; void* args[] = { managed_0 }; Call("Begin", args, 1); }
        void End() const { Call("End", nullptr, 0); }
    };
}
