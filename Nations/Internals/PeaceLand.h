#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class PeaceLand : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeaceLand(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "PeaceLand") {}
    public:
        void* Build(void* req, void* world) const { void* __callArgs[] = { req, world }; return CallStatic("Build", __callArgs, 2); }
    };
}
