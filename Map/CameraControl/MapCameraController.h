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
        void SetLogicalPosition(void* logical) const { void* __callArgs[] = { logical }; Call("SetLogicalPosition", __callArgs, 1); }
        void ViewExtentAt(float ortho, void* lo, void* hi) const { void* __callArgs[] = { &ortho, &lo, &hi }; Call("ViewExtentAt", __callArgs, 3); }
        void* GroundOffset(float ndcX, float ndcY, float ortho, float tiltDeg, float fovDeg, float aspect) const { void* __callArgs[] = { &ndcX, &ndcY, &ortho, &tiltDeg, &fovDeg, &aspect }; return CallStatic("GroundOffset", __callArgs, 6); }
        float PixelsPerTile(void* space) const { void* __callArgs[] = { space }; return CallValue<float>("PixelsPerTile", __callArgs, 1); }
        void Configure(void* bounds) const { void* __callArgs[] = { bounds }; Call("Configure", __callArgs, 1); }
        void AllowCloseZoom(float orthoFloor) const { void* __callArgs[] = { &orthoFloor }; Call("AllowCloseZoom", __callArgs, 1); }
        void SetZoomFloorOverride(float ortho) const { void* __callArgs[] = { &ortho }; Call("SetZoomFloorOverride", __callArgs, 1); }
        void SetRotation(float degrees) const { void* __callArgs[] = { &degrees }; Call("SetRotation", __callArgs, 1); }
        void RotateBy(float degrees) const { void* __callArgs[] = { &degrees }; Call("RotateBy", __callArgs, 1); }
        void ResetRotation() const { Call("ResetRotation", nullptr, 0); }
        void FocusOn(void* worldPos, float targetOrthoSize, float duration) const { void* __callArgs[] = { worldPos, &targetOrthoSize, &duration }; Call("FocusOn", __callArgs, 3); }
        bool FloatingOrigin() const { return ReadStaticField<bool>("FloatingOrigin"); }
        void FloatingOrigin(bool value) const { WriteStaticField<bool>("FloatingOrigin", value); }
    };
}
