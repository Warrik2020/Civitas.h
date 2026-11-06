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
        void* BorderOf(void* mil, void* grid) const { void* args[] = { mil, grid }; return Call("BorderOf", args, 2); }
        bool TraceStep(void* mil, void* grid, int work) const { void* args[] = { mil, grid, &work }; return CallValue<bool>("TraceStep", args, 3); }
        void* LineOf(int armyId) const { void* args[] = { &armyId }; return Call("LineOf", args, 1); }
        void* FallbackOf(int armyId) const { void* args[] = { &armyId }; return Call("FallbackOf", args, 1); }
        void Forget(int armyId) const { void* args[] = { &armyId }; Call("Forget", args, 1); }
        void SetReach(int armyId, void* comps) const { void* args[] = { &armyId, comps }; Call("SetReach", args, 2); }
        int PieceComponent(void* piece, int nationId, void* grid) const { void* args[] = { piece, &nationId, grid }; return CallValue<int>("PieceComponent", args, 3); }
        void ForgetNation(int nationId) const { void* args[] = { &nationId }; Call("ForgetNation", args, 1); }
        void* Resolve(void* army, void* mil, void* grid, void* cfg) const { void* args[] = { army, mil, grid, cfg }; return Call("Resolve", args, 4); }
        void* ResolveFallback(void* army, void* mil, void* grid, void* cfg) const { void* args[] = { army, mil, grid, cfg }; return Call("ResolveFallback", args, 4); }
        float AreaFollowTiles() const { return ReadStaticField<float>("AreaFollowTiles"); }
        void* comps() const { return ReadField<void*>("comps"); }
        int version() const { return ReadField<int>("version"); }
        void SetVersion(int value) const { WriteField<int>("version", value); }
        int piece() const { return ReadField<int>("piece"); }
        void SetPiece(int value) const { WriteField<int>("piece", value); }
        int index() const { return ReadField<int>("index"); }
        void SetIndex(int value) const { WriteField<int>("index", value); }
        float ax() const { return ReadField<float>("ax"); }
        void SetAx(float value) const { WriteField<float>("ax", value); }
        float ay() const { return ReadField<float>("ay"); }
        void SetAy(float value) const { WriteField<float>("ay", value); }
        float abx() const { return ReadField<float>("abx"); }
        void SetAbx(float value) const { WriteField<float>("abx", value); }
        float aby() const { return ReadField<float>("aby"); }
        void SetAby(float value) const { WriteField<float>("aby", value); }
        float len2() const { return ReadField<float>("len2"); }
        void SetLen2(float value) const { WriteField<float>("len2", value); }
        float arc0() const { return ReadField<float>("arc0"); }
        void SetArc0(float value) const { WriteField<float>("arc0", value); }
        float arcD() const { return ReadField<float>("arcD"); }
        void SetArcD(float value) const { WriteField<float>("arcD", value); }
    };
}
