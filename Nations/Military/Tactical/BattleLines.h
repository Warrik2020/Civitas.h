#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class BattleLines : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleLines(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "BattleLines") {}
    public:
        int LineOf(int battalion) const { void* __callArgs[] = { &battalion }; return CallStaticValue<int>("LineOf", __callArgs, 1); }
        void* At(int line) const { void* __callArgs[] = { &line }; return CallStatic("At", __callArgs, 1); }
        void Build(void* bats, void* extra, int count, int side, void* axis) const { void* __callArgs[] = { bats, extra, &count, &side, axis }; CallStatic("Build", __callArgs, 5); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
    };
}
