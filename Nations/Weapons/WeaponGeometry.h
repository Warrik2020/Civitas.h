#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class WeaponGeometry : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WeaponGeometry(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "WeaponGeometry") {}
    public:
        float SignedArea(void* p) const { void* __callArgs[] = { p }; return CallStaticValue<float>("SignedArea", __callArgs, 1); }
        float Area(void* p) const { void* __callArgs[] = { p }; return CallStaticValue<float>("Area", __callArgs, 1); }
        bool Bounds(void* p, void* min_, void* max_) const { void* __callArgs[] = { p, &min_, &max_ }; return CallStaticValue<bool>("Bounds", __callArgs, 3); }
        void* Centroid(void* p) const { void* __callArgs[] = { p }; return CallStatic("Centroid", __callArgs, 1); }
        void Translate(void* p, void* d) const { void* __callArgs[] = { p, d }; CallStatic("Translate", __callArgs, 2); }
        void ScaleAbout(void* p, void* pivot, float sx, float sy) const { void* __callArgs[] = { p, pivot, &sx, &sy }; CallStatic("ScaleAbout", __callArgs, 4); }
        bool Contains(void* p, void* q) const { void* __callArgs[] = { p, q }; return CallStaticValue<bool>("Contains", __callArgs, 2); }
        float DistanceToSegment(void* a, void* b, void* q) const { void* __callArgs[] = { a, b, q }; return CallStaticValue<float>("DistanceToSegment", __callArgs, 3); }
        bool SegmentsIntersect(void* a, void* b, void* c, void* d) const { void* __callArgs[] = { a, b, c, d }; return CallStaticValue<bool>("SegmentsIntersect", __callArgs, 4); }
        float Distance(void* a, void* b) const { void* __callArgs[] = { a, b }; return CallStaticValue<float>("Distance", __callArgs, 2); }
        bool Touch(void* a, void* b, float toleranceMm) const { void* __callArgs[] = { a, b, &toleranceMm }; return CallStaticValue<bool>("Touch", __callArgs, 3); }
        bool SelfIntersects(void* p) const { void* __callArgs[] = { p }; return CallStaticValue<bool>("SelfIntersects", __callArgs, 1); }
        void EnsureCcw(void* p) const { void* __callArgs[] = { p }; CallStatic("EnsureCcw", __callArgs, 1); }
        float DistanceToEdge(void* p, void* q, int& edge) const { void* __callArgs[] = { p, q, &edge }; return CallStaticValue<float>("DistanceToEdge", __callArgs, 3); }
        bool Triangulate(void* p, void* tris) const { void* __callArgs[] = { p, tris }; return CallStaticValue<bool>("Triangulate", __callArgs, 2); }
        void* Rect(float x0, float y0, float x1, float y1) const { void* __callArgs[] = { &x0, &y0, &x1, &y1 }; return CallStatic("Rect", __callArgs, 4); }
        void* Quad(float ax, float ay, float bx, float by, float cx, float cy, float dx, float dy) const { void* __callArgs[] = { &ax, &ay, &bx, &by, &cx, &cy, &dx, &dy }; return CallStatic("Quad", __callArgs, 8); }
        void* Copy(void* p) const { void* __callArgs[] = { p }; return CallStatic("Copy", __callArgs, 1); }
        float IntersectionArea(void* subject, void* convexClip) const { void* __callArgs[] = { subject, convexClip }; return CallStaticValue<float>("IntersectionArea", __callArgs, 2); }
        float IntersectionArea(void* subject, void* convexClip, void* centroid) const { void* __callArgs[] = { subject, convexClip, &centroid }; return CallStaticValue<float>("IntersectionArea", __callArgs, 3); }
        void* ClipHalfPlaneX(void* subject, float side) const { void* __callArgs[] = { subject, &side }; return CallStatic("ClipHalfPlaneX", __callArgs, 2); }
        int MaxXVertex(void* p) const { void* __callArgs[] = { p }; return CallStaticValue<int>("MaxXVertex", __callArgs, 1); }
        float VertexAngle(void* p, int i) const { void* __callArgs[] = { p, &i }; return CallStaticValue<float>("VertexAngle", __callArgs, 2); }
        float LowerEdgeLength(void* p) const { void* __callArgs[] = { p }; return CallStaticValue<float>("LowerEdgeLength", __callArgs, 1); }
        float UpperEdgeLength(void* p) const { void* __callArgs[] = { p }; return CallStaticValue<float>("UpperEdgeLength", __callArgs, 1); }
        float ForwardEdgeLength(void* p) const { void* __callArgs[] = { p }; return CallStaticValue<float>("ForwardEdgeLength", __callArgs, 1); }
    };
}
