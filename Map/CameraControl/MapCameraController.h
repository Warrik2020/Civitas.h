#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::CameraControl
{
    class MapCameraController : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapCameraController(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.CameraControl", "MapCameraController") {}
    public:
        void SetLogicalPosition(void* logical) const { void* args[] = { logical }; Call("SetLogicalPosition", args, 1); }
        void ViewExtentAt(float ortho, void* lo, void* hi) const { void* args[] = { &ortho, &lo, &hi }; Call("ViewExtentAt", args, 3); }
        void* GroundOffset(float ndcX, float ndcY, float ortho, float tiltDeg, float fovDeg, float aspect) const { void* args[] = { &ndcX, &ndcY, &ortho, &tiltDeg, &fovDeg, &aspect }; return CallStatic("GroundOffset", args, 6); }
        float PixelsPerTile(void* space) const { void* args[] = { space }; return CallValue<float>("PixelsPerTile", args, 1); }
        void Configure(void* bounds) const { void* args[] = { bounds }; Call("Configure", args, 1); }
        void AllowCloseZoom(float orthoFloor) const { void* args[] = { &orthoFloor }; Call("AllowCloseZoom", args, 1); }
        void SetZoomFloorOverride(float ortho) const { void* args[] = { &ortho }; Call("SetZoomFloorOverride", args, 1); }
        void SetRotation(float degrees) const { void* args[] = { &degrees }; Call("SetRotation", args, 1); }
        void RotateBy(float degrees) const { void* args[] = { &degrees }; Call("RotateBy", args, 1); }
        void ResetRotation() const { Call("ResetRotation", nullptr, 0); }
        void FocusOn(void* worldPos, float targetOrthoSize, float duration) const { void* args[] = { worldPos, &targetOrthoSize, &duration }; Call("FocusOn", args, 3); }
        bool FloatingOrigin() const { return ReadStaticField<bool>("FloatingOrigin"); }
        void SetFloatingOrigin(bool value) const { WriteStaticField<bool>("FloatingOrigin", value); }
    };
}
