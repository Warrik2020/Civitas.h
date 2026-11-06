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
        void Push(void* a) const { void* args[] = { a }; CallStatic("Push", args, 1); }
        void* Pop(int armyId) const { void* args[] = { &armyId }; return CallStatic("Pop", args, 1); }
        bool Has(int armyId) const { void* args[] = { &armyId }; return CallStaticValue<bool>("Has", args, 1); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        int Depth() const { return ReadStaticField<int>("Depth"); }
    };
}
