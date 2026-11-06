#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Naval
{
    class VesselState : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit VesselState(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Naval", "VesselState") {}
    public:
        void SnapRender() const { Call("SnapRender", nullptr, 0); }
        float RemainingTiles() const { return CallValue<float>("RemainingTiles", nullptr, 0); }
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int phase() const { return ReadField<int>("phase"); }
        void SetPhase(int value) const { WriteField<int>("phase", value); }
        int cargoKind() const { return ReadField<int>("cargoKind"); }
        void SetCargoKind(int value) const { WriteField<int>("cargoKind", value); }
        int cargoId() const { return ReadField<int>("cargoId"); }
        void SetCargoId(int value) const { WriteField<int>("cargoId", value); }
        void* pos() const { return ReadField<void*>("pos"); }
        void SetPos(void* value) const { WriteField<void*>("pos", value); }
        void* heading() const { return ReadField<void*>("heading"); }
        void SetHeading(void* value) const { WriteField<void*>("heading", value); }
        int waterTile() const { return ReadField<int>("waterTile"); }
        void SetWaterTile(int value) const { WriteField<int>("waterTile", value); }
        int fromLandTile() const { return ReadField<int>("fromLandTile"); }
        void SetFromLandTile(int value) const { WriteField<int>("fromLandTile", value); }
        int toLandTile() const { return ReadField<int>("toLandTile"); }
        void SetToLandTile(int value) const { WriteField<int>("toLandTile", value); }
        void* route() const { return ReadField<void*>("route"); }
        void SetRoute(void* value) const { WriteField<void*>("route", value); }
        int routeCount() const { return ReadField<int>("routeCount"); }
        void SetRouteCount(int value) const { WriteField<int>("routeCount", value); }
        int leg() const { return ReadField<int>("leg"); }
        void SetLeg(int value) const { WriteField<int>("leg", value); }
        float legPos() const { return ReadField<float>("legPos"); }
        void SetLegPos(float value) const { WriteField<float>("legPos", value); }
        bool arrived() const { return ReadField<bool>("arrived"); }
        void SetArrived(bool value) const { WriteField<bool>("arrived", value); }
        void* renderPos() const { return ReadField<void*>("renderPos"); }
        void SetRenderPos(void* value) const { WriteField<void*>("renderPos", value); }
        void* renderVel() const { return ReadField<void*>("renderVel"); }
        void SetRenderVel(void* value) const { WriteField<void*>("renderVel", value); }
        bool renderInit() const { return ReadField<bool>("renderInit"); }
        void SetRenderInit(bool value) const { WriteField<bool>("renderInit", value); }
        float wake() const { return ReadField<float>("wake"); }
        void SetWake(float value) const { WriteField<float>("wake", value); }
    };
}
