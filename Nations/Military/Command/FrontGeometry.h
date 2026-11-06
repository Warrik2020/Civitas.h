#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class FrontGeometry : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FrontGeometry(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "FrontGeometry") {}
    public:
        void* BorderOf(void* mil, void* grid) const { void* __callArgs[] = { mil, grid }; return Call("BorderOf", __callArgs, 2); }
        bool TraceStep(void* mil, void* grid, int work) const { void* __callArgs[] = { mil, grid, &work }; return CallValue<bool>("TraceStep", __callArgs, 3); }
        void* LineOf(int armyId) const { void* __callArgs[] = { &armyId }; return Call("LineOf", __callArgs, 1); }
        void* FallbackOf(int armyId) const { void* __callArgs[] = { &armyId }; return Call("FallbackOf", __callArgs, 1); }
        void Forget(int armyId) const { void* __callArgs[] = { &armyId }; Call("Forget", __callArgs, 1); }
        void SetReach(int armyId, void* comps) const { void* __callArgs[] = { &armyId, comps }; Call("SetReach", __callArgs, 2); }
        int PieceComponent(void* piece, int nationId, void* grid) const { void* __callArgs[] = { piece, &nationId, grid }; return CallValue<int>("PieceComponent", __callArgs, 3); }
        void ForgetNation(int nationId) const { void* __callArgs[] = { &nationId }; Call("ForgetNation", __callArgs, 1); }
        void* Resolve(void* army, void* mil, void* grid, void* cfg) const { void* __callArgs[] = { army, mil, grid, cfg }; return Call("Resolve", __callArgs, 4); }
        void* ResolveFallback(void* army, void* mil, void* grid, void* cfg) const { void* __callArgs[] = { army, mil, grid, cfg }; return Call("ResolveFallback", __callArgs, 4); }
        float AreaFollowTiles() const { return ReadStaticField<float>("AreaFollowTiles"); }
    };
}
