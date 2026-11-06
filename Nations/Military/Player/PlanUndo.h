#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Player
{
    class PlanUndo : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PlanUndo(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Player", "PlanUndo") {}
    public:
        void Push(void* a) const { void* __callArgs[] = { a }; CallStatic("Push", __callArgs, 1); }
        void* Pop(int armyId) const { void* __callArgs[] = { &armyId }; return CallStatic("Pop", __callArgs, 1); }
        bool Has(int armyId) const { void* __callArgs[] = { &armyId }; return CallStaticValue<bool>("Has", __callArgs, 1); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        int Depth() const { return ReadStaticField<int>("Depth"); }
    };
}
